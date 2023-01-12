const char Main_Page[] PROGMEM = R"===(
<!DOCTYPE html>
<html>
    <head>
        <meta charset="utf-8" content="width=device-width, initial-scale=1" name="viewport">
        <title>Room 308 Door Control</title>
        <style>
            body {
                text-align: center;
                font-family: "Calibri body", sans-serif;
                background-color: rgb(129, 129, 129);
                color: black;
            }
            #title {
                font-size: 7vh;
            }
            section{
                margin-left: auto;
                margin-right: auto;
            }
            button {
                border-radius: 5px;
                background-color: white;
                padding: 7vh 5vw 7vh 5vw;
                display: inline-block;
                font-size: 3vh;
            }
        </style>
    </head>
    <body>
        <h1 id="title">308 Door Control</h1>
        <section>
            <a href="/doorCycle"><button>Cycle Door</button></a>
            <a href="/holdOpen"><button>Hold Open</button></a>
        </section>
    </body>
</html>
)===";