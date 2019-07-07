import sqlite3
from bottle import route, run, debug, template, request

@route('/todo')
def todo_list():
    conn = sqlite3.connect('todo.db')
    c = conn.cursor()
    c.execute("SELECT id, task FROM todo WHERE status LIKE '1'")
    result = c.fetchall()
    c.close()
    output = template('make_table', rows=result)
    return output

@route('/new', method='GET')
def new_item():
    new = request.GET.task.strip()
    conn = sqlite3.connect('todo.db')
    c = conn.cursor()
    c.execute("INSERT INTO todo (task, status) VALUES (?,?)", (new, 1))
    new_id = c.lastrowid
    conn.commit()
    c.close()

    return '<p>The new task was inserted into the database, the ID is %s</p>' % new_id

debug(True)
run(host='0.0.0.0', port=8080, reloader=True)
