package com.company.TestProject;

import org.springframework.stereotype.Service;
import java.util.ArrayList;
import java.util.List;

@Service
public class StudentService {

    List<Student> stuArr = new ArrayList<>();

    public void createStudentAcc(int id, String name) {
        Student s = new Student(id, name);
        stuArr.add(s);
    }

    public List<Student> getAllStudents() {
        return stuArr;
    }
}
