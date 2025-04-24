<?
class Student extends Person
{
    // additional properties (variables)
    public $school;
    // additional methods (functions)
    public function setSchool($school)
    {
        $this->school = $school;
    }
    public function getSchool()
    {
        return $this->school;
    }
}

// create an object of the Student class
$student = new Student();

// set the name, age, and school of the student
$student->setName("Jane");
$student->setAge(20);
$student->setSchool("XYZ University");

// get the name, age, and school of the student
echo $student->getName(); // "Jane"
echo $student->getAge(); // 20
echo $student->getSchool(); // "XYZ University"




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

?>