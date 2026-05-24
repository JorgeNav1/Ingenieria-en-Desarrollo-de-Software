<!DOCTYPE html>
<html lang="es">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Captura de datos</title>
    <link rel="stylesheet" href="Css/Style.css">
</head>
<body>
<div class="dive">
    <form action="resultados.php" method="POST">
        <h1>Captura de datos personales</h1>
        <br>
        <h2>Ingresa los datos que se te piden</h2>
        <br>
        <p>Mi primera encuesta</p>    
        <hr>
        
        <label for="name">Nombre:</label>
        <input type="text" id="name" name="name" placeholder="Ingresa tu nombre">
        <br><br> 

        <label for="age">Edad:</label>
        <input type="number" id="age" name="age" placeholder="Edad">
        <br><br>

        <label for="city">Ciudad:</label>
        <input type="text" id="city" name="city" placeholder="Ingresa tu ciudad">
        <br><br>
        
        <label for="hobby">Pasatiempo favorito:</label>
        <input type="text" id="hobby" name="hobby" placeholder="Ingresa tu pasatiempo">
        <br><br>
        
        <input type="submit" value="Enviar">
    </form> 
</div>
</body>
</html>