import sqlite3
from bottle import route, run, debug, template

@route('/todo')
def todo_list():
    conn = sqlite3.connect('todo.db')
    c = conn.cursor()
    c.execute("SELECT id, task FROM todo WHERE status LIKE '1'")
    result = c.fetchall()
    c.close()
    output = template('make_template', rows=result)
    return output

debug(True)
run(host='0.0.0.0', port=8080, reloader=True)
