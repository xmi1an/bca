<?php
class Person
{
    public $name, $age;

    function showDetails()
    {
        echo "Your Name : " . $this->name . "<br>";
        echo "Your age : " . $this->age . "<br><br>";
    }
}

class Car
{
    public $carName;
    public $price;
    public $brand;
    public $model;

    function showCarDetails()
    {
        echo "Car Name : " . $this->carName . "<br>";
        echo "Car Brand : " . $this-> brand . "<br>";
        echo "Car Model : " . $this->model . "<br>";
        echo "Car Price : " . $this->price . "<br>";
    }
} // End of Car Class

    $alto = new Car();
    $alto->carName = "Alto Car";
    $alto->brand = "Maruti Suzuki";
    $alto->model = "alto-800";
    $alto->price = "5,000,00";
    
    $alto->showCarDetails();

    $p1 = new Person();
    $p2 = new Person();
    $p3 = new Person();

    $p1->name = "Sanket";
    $p1->age = 19;
    // $p1->showDetails();

    $p2->name = "Kinjal";
    $p2->age = "18";
    // $p2->showDetails();

?>