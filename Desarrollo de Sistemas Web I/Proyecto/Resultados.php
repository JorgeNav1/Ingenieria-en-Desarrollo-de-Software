<!DOCTYPE html>
<html lang="es">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Resultados de datos</title>
    <link rel="stylesheet" href="Css/Style.css">
</head>
<body>
    <div class="dive2">
        <h1>Resultados</h1>
        <center>
            <img src="Img/Resultados.jpg" alt="Resultados" width="500">
            <?php
                $nombre = $_POST['name'];
                $edad = $_POST['age'];
                $ciudad = $_POST['city'];
                $hobby = $_POST['hobby'];

                echo "<p><b>Nombre:</b> '.$nombre'</p></br>";
                echo "<p><b>Edad:</b> '.$edad'</p></br>";
                echo "<p><b>Ciudad:</b> '.$ciudad'</p></br>";
                echo "<p><b>Pasatiempo:</b> '.$hobby'</p></br>";
            ?>
        </center>
        <h2>Bien hecho</h2>
        <div id="popUpOverlay"></div>
        <div id="popUpBox">
            <div id="box">
                <i class="fas fa-question-circle fa-5x" ></i>
                <h1>¿Volver a ingresar datos?</h1>
                <div id="closeModal"></div>
            </div>
        </div>
        <button onclick="Alert.render('Te vez muy guapo hoy')" class="btn">¡Volver a Ingresar!</button>
        <script src="Js/App.js"></script>
    </div>
</body>
</html>