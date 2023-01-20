<?php

class Person
{
    // properties (variables)
    public $name;
    public $age;
    // methods (functions)
    public function setName($name)
    {
        $this->name = $name;
    }
    public function getName()
    {
        return $this->name;
    }
    public function setAge($age)
    {
        $this->age = $age;
    }
    public function getAge()
    {
        return $this->age;
    }
}

// create an object of the Person class
$person = new Person();

// set the name and age of the person
$person->setName("John");
$person->setAge(30);

// get the name and age of the person
echo $person->getName(); // "John"
echo $person->getAge(); // 30
