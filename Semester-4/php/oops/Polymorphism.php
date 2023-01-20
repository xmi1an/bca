<?
class Shape
{
    public function calculateArea()
    {
        // this method will be implemented differently for each subclass
    }
}

class Circle extends Shape
{
    public $radius;
    public function __construct($radius)
    {
        $this->radius = $radius;
    }
    public function calculateArea()
    {
        return pi() * pow($this->radius, 2);
    }
}

class Rectangle extends Shape
{
    public $width;
    public $height;
    public function __construct($width, $height)
    {
        $this->width = $width;
        $this->height = $height;
    }
    public function calculateArea()
    {
        return $this->width * $this->height;
    }
}

// create a Circle object with radius 5
$circle = new Circle(5);

// create a Rectangle object with width 10 and height 20
$rectangle = new Rectangle(10, 20);

// calculate the area of the Circle and Rectangle
echo $circle->calculateArea(); // 78.539816339745
echo $rectangle->calculateArea(); // 200


?>