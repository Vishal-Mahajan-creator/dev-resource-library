import java.util.Scanner;

// Interface for electric vehicles
interface Electric {
    void chargeBattery();
}

// Abstract base class Vehicle
abstract class Vehicle {
    protected String brand;

    public Vehicle(String brand) {
        this.brand = brand;
    }

    abstract void start();

    void info() {
        System.out.println("Vehicle brand: " + brand);
    }
}

// Car class extends Vehicle
class Car extends Vehicle {
    protected int wheels;

    public Car(String brand, int wheels) {
        super(brand);
        this.wheels = wheels;
    }

    @Override
    void start() {
        System.out.println(brand + " car with " + wheels + " wheels starts");
    }

    void honk() {
        System.out.println(brand + " car honks!");
    }
}

// ElectricCar extends Car and implements Electric interface
class ElectricCar extends Car implements Electric {
    private int batteryLevel;

    public ElectricCar(String brand, int wheels, int batteryLevel) {
        super(brand, wheels);
        this.batteryLevel = batteryLevel;
    }

    @Override
    public void chargeBattery() {
        batteryLevel = 100;
        System.out.println(brand + " electric car battery charged to 100%");
    }

    @Override
    void start() {
        super.start();
        if (batteryLevel > 20) {
            System.out.println(brand + " electric car is ready to go!");
        } else {
            System.out.println(brand + " electric car battery low, please charge!");
        }
    }

    void displayBattery() {
        System.out.println("Battery level: " + batteryLevel + "%");
    }
}

// Tesla extends ElectricCar and overrides start()
class Tesla extends ElectricCar {
    public Tesla(int batteryLevel) {
        super("Tesla", 4, batteryLevel);
    }

    @Override
    void start() {
        System.out.println("Tesla starting sequence initiated.");
        super.start();
    }

    void autopilot() {
        System.out.println("Tesla autopilot activated.");
    }
}


public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter battery level for first Tesla (0-100): ");
        int battery1 = scanner.nextInt();

        Vehicle vehicle = new Tesla(battery1);
        vehicle.info();
        vehicle.start();

        if (vehicle instanceof Electric) {
            ((Electric) vehicle).chargeBattery();
        }

        if (vehicle instanceof Tesla) {
            ((Tesla) vehicle).autopilot();
        }

        if (vehicle instanceof ElectricCar) {
            ((ElectricCar) vehicle).displayBattery();
        }

        System.out.println();

        System.out.print("Enter battery level for second Tesla (0-100): ");
        int battery2 = scanner.nextInt();

        Car car = new Tesla(battery2);
        car.start();
        car.honk();

        System.out.print("Enter battery level for third Tesla (0-100): ");
        int battery3 = scanner.nextInt();

        ElectricCar eCar = new Tesla(battery3);
        eCar.start();
        eCar.chargeBattery();
        eCar.displayBattery();

        scanner.close();
    }
}
