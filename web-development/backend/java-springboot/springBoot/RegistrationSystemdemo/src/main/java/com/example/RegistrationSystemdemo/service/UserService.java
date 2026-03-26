package com.example.RegistrationSystemdemo.service;

import com.example.RegistrationSystemdemo.DTOs.RegisterRequestDTO;
import com.example.RegistrationSystemdemo.modal.UserEntity;
import com.example.RegistrationSystemdemo.repository.UserDAO;
import org.springframework.stereotype.Service;

@Service
public class UserService {
    private final UserDAO userDAO;

    public UserService(UserDAO userDAO) {
        this.userDAO = userDAO;
    }

    public boolean addUser(RegisterRequestDTO reqDto) {
        UserEntity user = new UserEntity();
        user.setUsername(reqDto.getUsername());
        user.setEmail(reqDto.getEmail());
        user.setPassword(reqDto.getPassword());

        return userDAO.save(user) > 0;
    }
}
