<!-- 
Personal Information: This can include fields for first name, last name, date of birth, gender, and contact information such as email and phone number.

Address Information: This can include fields for street address, city, state, zip code, and country.

Professional Information: This can include fields for job title, department, start date, employee ID, and salary.

Education Information: This can include fields for highest level of education completed, major, and school attended.
 -->

<html>

<body>
    <!--  -->
    <form action="">
        Name : <input type="text" id="firstName" name="firstName">
        <br>
        <br>

        Email: <input type="email" id="email" name="email">
        <br>
        <br>

        Gender : <input type="radio" value="Male" name="gender">Male <br>
        &nbsp;&nbsp; &nbsp; <input type="radio" value="Female" name="gender">Female
        <br>
        <br>

        Phone : <input type="tel" name="phone"><br>
        <br>
        <br>

        DOB : <input type="date" id="dob" name="dob"><br>
        <br>
        <br>

        <input type="submit" name="send" value="Submit">
    </form>

    <form>
        <fieldset>
            <legend>Personal Information</legend>
            <label for="firstName">First Name:</label>
            <label for="lastName">Last Name:</label>
            <input type="text" id="lastName" name="lastName"><br>
            <label for="dob">Date of Birth:</label>


            <label for="email">Email:</label>
            <input type="email" id="email" name="email"><br>
            <label for="phone">Phone:</label>
            <input type="tel" id="phone" name="phone"><br>
        </fieldset>

        <fieldset>
            <legend>Address Information</legend>
            <label for="address">Address:</label>
            <input type="text" id="address" name="address"><br>
            <label for="city">City:</label>
            <input type="text" id="city" name="city"><br>
            <label for="state">State:</label>
            <input type="text" id="state" name="state"><br>
            <label for="zip">Zip Code:</label>
            <input type="text" id="zip" name="zip"><br>
            <label for="country">Country:</label>
            <select id="country" name="country">
                <option value=""></option>
                <option value="us">United States</option>
                <option value="ca">Canada</option>
            </select><br>
        </fieldset>

        <fieldset>
            <legend>Professional Information</legend>
            <label for="jobTitle">Job Title:</label>
            <input type="text" id="jobTitle" name="jobTitle"><br>
            <label for="department">Department:</label>
            <input type="text" id="department" name="department"><br>
            <label for="startDate">Start Date:</label>
            <input type="date" id="startDate" name="startDate"><br>
            <label for="employeeId">Employee ID:</label>
            <input type="text" id="employeeId" name="employeeId"><br>
            <label for="salary">Salary:</label>
            <input type="text" id="salary" name="salary"><br>
        </fieldset>

        <fieldset>
            <legend>Education Information</legend>
            <label for="education">Education:</label>
            <input type="text" id="education" name="education"><br>
            <label for="major">Major</label>
            <input type="text" id="major" name="major"><br>
            <label for="school">School:</label>
            <input type="text" id="school" name="school"><br>

        </fieldset>
        <fieldset>
            <legend>Emergency Contact Information</legend>
            <label for="emergencyName">Name:</label>
            <input type="text" id="emergencyName" name="emergencyName"><br>
            <label for="emergencyPhone">Phone:</label>
            <input type="tel" id="emergencyPhone" name="emergencyPhone"><br>
            <label for="emergencyRelation">Relationship:</label>
            <input type="text" id="emergencyRelation" name="emergencyRelation"><br>
        </fieldset>
        <fieldset>
            <legend>Identification Information</legend>
            <label for="passport">Passport:</label>
            <input type="text" id="passport" name="passport"><br>
            <label for="nationalId">National ID:</label>
            <input type="text" id="nationalId" name="nationalId"><br>
            <label for="driverLicense">Driver's License:</label>
            <input type="text" id="driverLicense" name="driverLicense"><br>
        </fieldset>
        <fieldset>
            <legend>Benefits Information</legend>
            <label for="healthInsurance">Health Insurance:</label>
            <input type="text" id="healthInsurance" name="healthInsurance"><br>
            <label for="retirementPlan">Retirement Plan:</label>
            <input type="text" id="retirementPlan" name="retirementPlan"><br>
            <label for="otherBenefits">Other Benefits:</label>
            <input type="text" id="otherBenefits" name="otherBenefits"><br>

        </fieldset>
        <fieldset>
            <legend>Authorization Information</legend>
            <label for="signature">Signature:</label>
            <input type="text" id="signature" name="signature"><br>
            <label for="date">Date:</label>
            <input type="date" id="date" name="date"><br>
        </fieldset>
        <input type="submit" value="Submit">
    </form>

</body>

</html>