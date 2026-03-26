package com.company.TestProject;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.*;

@Controller
public class StudentController {

    @Autowired
    StudentService service;

    @GetMapping("/")
    public String home() {
        return "home";
    }

    @GetMapping("/create")
    public String createForm() {
        return "create";
    }

    @PostMapping("/create")
    public String createStudent(@RequestParam int id,
                                @RequestParam String name) {
        service.createStudentAcc(id, name);
        return "redirect:/list";
    }

    @GetMapping("/list")
    public String listStudents(Model model) {
        model.addAttribute("students", service.getAllStudents());
        return "list";
    }
}
