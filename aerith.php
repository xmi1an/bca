<?php
class Car
{
    // member variables
    public $color;
    public $brand;
    public $model;
    // member functions
    public function startEngine()
    {
        // code to start the engine
    }

    public function accelerate()
    {
        // code to accelerate the car
    }
}

// create child class
class SportsCar extends Car
{
    // member functions
    public function accelerate()
    {
        // code to accelerate the sports car
    }
}
// create object
$myCar = new Car();
?>