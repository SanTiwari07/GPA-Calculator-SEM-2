# GPA-Calculator-SEM-2
# 🎓 GPA Calculator for Engineering Students (C++)
This is a C++ console-based program designed to calculate the SGPA (Semester Grade Point Average) for engineering students. It allows the user to input marks for various subjects and components, convert them into grades, and compute the final GPA based on predefined weightage.

# 📌 Features
Accepts marks for:

Theory subjects: Mid-semester, End-semester, CIE (Continuous Internal Evaluation), and Attendance

Term Work (TW) for 4 subjects

Soft Skills: TW and Theory

IIDTL, NPTEL, and CCA components

Converts attendance percentage into marks.

Normalizes end-semester marks from 70 to 60.

Converts all raw marks into grade points using an updated scale.

Applies individual weightages to each subject and activity.


# Calculates and displays:

Theory Grade Points

Term Work Grade Points

Additional Component Grade Points

Final SGPA (out of 20 and out of 10)


# 📘 Grade Conversion Logic
Percentage	Grade Point
91–100	10,
81–90	9,
71–80	8,
61–70	7,
51–60	6,
45–50	5,
40–44	4 and 
Below 40	0 (Fail)


# 🧮 GPA Weightage
Weighted GPA is calculated based on theory subjects and various co-curricular components like:

Theory: Weighted (3x for core subject, 2x for others)

Term Work: Weighted (4 subjects)

Soft Skills, IIDTL, NPTEL, CCA: Each with individual contribution


# 📂 How to Use
Compile the program using a C++ compiler like g++.

Run the executable.

Enter the requested marks as prompted.

View your grade points for each subject and the final SGPA.
