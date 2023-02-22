<?php
/* Index array. */
    $marvelHeros = ["IronMan", "CaptainAmerica", "Thor", "Hulk", "Black Widow"];
/* 
    echo $marvelHeros[0];
    echo $marvelHeros[1];
    echo $marvelHeros[2];
    echo $marvelHeros[3];
    echo $marvelHeros[4]; */

echo "With Count : " . count($marvelHeros);

echo "<br>";

echo "with sizeof : " . sizeof($marvelHeros);

echo "<br>";

echo "With Search : " . array_search("Hulk", $marvelHeros, true);

echo "<br>";

if( in_array('IronMan', $marvelHeros) )
    {
         echo "IronMan is in the array";
    }
else
    {
            echo "IronMan is not in the array";
    }

/* ************************************************************************************* */

/*  $marvelHeros = array(
        "Ironman" => "Tony Stark",
        "Captain America" => "Steve Rogers",
        "Thor" => "Thor Odinson",
        "Hulk" => "Bruce Banner",
        "Black Widow" => "Natasha Romanoff",
    );
 */
// echo $marvelHeros['Thor'];
// echo $marvelHeros['Black Widow'];

/* Associative Array. */
$marvelHeroes = array(
    "Iron Man" => "Tony Stark",
    "Captain America" => "Steve Rogers",
    "Thor" => "Thor Odinson",
    "Hulk" => "Bruce Banner",
    "Black Widow" => "Natasha Romanoff"
);

echo "<br>";
    foreach($marvelHeroes as $heros => $realname)
    {
        echo "$heros : $realname" . "<br>";
    }
?>