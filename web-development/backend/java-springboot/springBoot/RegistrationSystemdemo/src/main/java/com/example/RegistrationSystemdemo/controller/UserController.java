package com.example.RegistrationSystemdemo.controller;

import com.example.RegistrationSystemdemo.DTOs.RegisterRequestDTO;
import com.example.RegistrationSystemdemo.service.UserService;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;

@RestController
@RequestMapping("/api")
public class UserController {

    private final UserService userService;

    public UserController(UserService userService) {
        this.userService = userService;
    }

    @PostMapping("/register")
    public ResponseEntity<String> registerUser(@RequestBody RegisterRequestDTO reqDTO) {
        boolean success = userService.addUser(reqDTO);
        if (success) {
            return ResponseEntity.ok("User registered successfully");
        } else {
            return ResponseEntity.badRequest().body("Registration failed");
        }
    }
}
