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

class SuperCar extends Car
{
    // member variables
    public $horsepower;
    // member functions
    public function boost()
    {
        // code to boost the car
    }
}
?>
