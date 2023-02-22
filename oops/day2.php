<?php

class Person
{
  protected $name; // protected property means it can only be accessed within the class or by inheriting classes
  protected $age;

  public function setName($name)
  {
    $this->name = $name;
  }

  public function setAge($age)
  {
    $this->age = $age;
  }

  public function getName()
  {
    return $this->name;
  }

  public function getAge()
  {
    return $this->age;
  }
}

class Student extends Person
{
  private $studentId; // private property means it can only be accessed within the class

  public function setStudentId($studentId)
  {
    $this->studentId = $studentId;
  }

  public function getStudentId()
  {
    return $this->studentId;
  }
}

// Create a new student
$student = new Student();
$student->setName('Milan');
$student->setAge(20);
$student->setStudentId('12345');

// Access properties and methods
echo $student->getName(); // Output: John
