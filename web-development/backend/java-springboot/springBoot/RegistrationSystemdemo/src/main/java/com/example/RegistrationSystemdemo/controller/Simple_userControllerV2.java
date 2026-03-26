package com.example.RegistrationSystemdemo.controller;

import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.http.ResponseEntity;

@Controller
public class Simple_userControllerV2 {

    @GetMapping("/")
    public ResponseEntity<String> homePage() {
        // Return a simple HTML message with a clickable link
        String message = "<h2>Welcome to the Registration System</h2>"
                + "<p>Please <a href='/registration.html'>click here</a> to register.</p>";

        return ResponseEntity.ok().body(message);
    }
}
