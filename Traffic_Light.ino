// C++ code
//
// Traffic Light

const int redLED = 10;
const int yellowLED = 9;
const int greenLED = 8;
const int button = 2;

void setup()
{
    pinMode(redLED, OUTPUT);
    pinMode(yellowLED, OUTPUT);
    pinMode(greenLED, OUTPUT);

    pinMode(button, INPUT);
}

void loop()
{
    // Normal state: traffic has a green light
    digitalWrite(greenLED, HIGH);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, LOW);

    // Check if pedestrian button is pressed
    if (digitalRead(button) == HIGH)
    {
        // Turn green off and yellow on
        digitalWrite(greenLED, LOW);
        digitalWrite(yellowLED, HIGH);

        delay(2000);

        // Yellow off, red on
        digitalWrite(yellowLED, LOW);
        digitalWrite(redLED, HIGH);

        delay(5000);

        // Return to green
        digitalWrite(redLED, LOW);
        digitalWrite(greenLED, HIGH);

        // Prevent immediate retriggering
        delay(1000);
    }
}
