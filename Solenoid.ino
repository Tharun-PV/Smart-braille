int Relay_1 = 2;
int Relay_2 = 3;
int Relay_3 = 4;
int Relay_4 = 5;
int Relay_5 = 6;
int Relay_6 = 7;
char t = 'l';

void setup() {
  // put your setup code here, to run once:
  pinMode(Relay_1, OUTPUT);
  pinMode(Relay_2, OUTPUT);
  pinMode(Relay_3, OUTPUT);
  pinMode(Relay_4, OUTPUT);
  pinMode(Relay_5, OUTPUT);
  pinMode(Relay_6, OUTPUT);
  Serial.println("hi");
  //  digitalWrite(Relay_1, HIGH);
  //  digitalWrite(Relay_2, HIGH);
  //  digitalWrite(Relay_3, HIGH);
  //  digitalWrite(Relay_4, HIGH);
  //  digitalWrite(Relay_5, HIGH);
  //  digitalWrite(Relay_6, HIGH);
  Serial.begin(9600);
  delay(1000);
}

void loop() {

  if (Serial.available())
  {
    t = Serial.read();
    Serial.println("------------");
    Serial.println(t);
    Serial.println("------------");

    if (t == 'a') {

      digitalWrite(Relay_1, HIGH);
      delay_fun();
    }


    else if (t == 'b') {
      digitalWrite(Relay_1, HIGH);
      digitalWrite(Relay_2, HIGH);
      delay_fun();
    }

    else if (t == 'c') {
      digitalWrite(Relay_1, HIGH);
      digitalWrite(Relay_4, HIGH);
      delay_fun();
    }

    else if (t == 'd') {
      digitalWrite(Relay_1, HIGH);
      digitalWrite(Relay_4, HIGH);
      digitalWrite(Relay_5, HIGH);
      delay_fun();

    } else if (t == 'e') {
      digitalWrite(Relay_1, HIGH);
      digitalWrite(Relay_5, HIGH);
      delay_fun();

    } else if (t == 'f') {
      digitalWrite(Relay_1, HIGH);
      digitalWrite(Relay_2, HIGH);
      digitalWrite(Relay_4, HIGH);
      delay_fun();

    } else if (t == 'g') {
      digitalWrite(Relay_1, HIGH);
      digitalWrite(Relay_2, HIGH);
      digitalWrite(Relay_4, HIGH);
      digitalWrite(Relay_5, HIGH);
      delay_fun();

    } else if (t == 'h') {
      digitalWrite(Relay_1, HIGH);
      digitalWrite(Relay_2, HIGH);
      digitalWrite(Relay_5, HIGH);
      delay_fun();

    } else if (t == 'i') {
      digitalWrite(Relay_2, HIGH);
      digitalWrite(Relay_4, HIGH);
      delay_fun();

    } else if (t == 'j') {
      digitalWrite(Relay_2, HIGH);
      digitalWrite(Relay_4, HIGH);
      digitalWrite(Relay_5, HIGH);
      delay_fun();

    } else if (t == 'k') {
      digitalWrite(Relay_1, HIGH);
      digitalWrite(Relay_3, HIGH);
      delay_fun();

    } else if (t == 'l') {
      digitalWrite(Relay_1, HIGH);
      digitalWrite(Relay_2, HIGH);
      digitalWrite(Relay_3, HIGH);
      delay_fun();

    } else if (t == 'm') {
      digitalWrite(Relay_1, HIGH);
      digitalWrite(Relay_3, HIGH);
      digitalWrite(Relay_4, HIGH);
      delay_fun();

    } else if (t == 'n') {
      digitalWrite(Relay_1, HIGH);
      digitalWrite(Relay_3, HIGH);
      digitalWrite(Relay_4, HIGH);
      digitalWrite(Relay_5, HIGH);
      delay_fun();

    } else if (t == 'o') {
      digitalWrite(Relay_1, HIGH);
      digitalWrite(Relay_3, HIGH);
      digitalWrite(Relay_5, HIGH);
      delay_fun();

    } else if (t == 'p') {
      digitalWrite(Relay_1, HIGH);
      digitalWrite(Relay_2, HIGH);
      digitalWrite(Relay_3, HIGH);
      digitalWrite(Relay_4, HIGH);
      delay_fun();

    } else if (t == 'q') {
      digitalWrite(Relay_1, HIGH);
      digitalWrite(Relay_2, HIGH);
      digitalWrite(Relay_3, HIGH);

      digitalWrite(Relay_4, HIGH);
      digitalWrite(Relay_5, HIGH);
      delay_fun();

    } else if (t == 'r') {
      digitalWrite(Relay_1, HIGH);
      digitalWrite(Relay_2, HIGH);
      digitalWrite(Relay_3, HIGH);
      digitalWrite(Relay_5, HIGH);
      delay_fun();

    } else if (t == 's') {
      digitalWrite(Relay_2, HIGH);
      digitalWrite(Relay_3, HIGH);
      digitalWrite(Relay_4, HIGH);
      delay_fun();

    } else if (t == 't') {
      digitalWrite(Relay_2, HIGH);
      digitalWrite(Relay_3, HIGH);
      digitalWrite(Relay_4, HIGH);
      digitalWrite(Relay_5, HIGH);
      delay_fun();

    } else if (t == 'u') {
      digitalWrite(Relay_1, HIGH);
      digitalWrite(Relay_3, HIGH);
      digitalWrite(Relay_6, HIGH);
      delay_fun();

    } else if (t == 'v') {
      digitalWrite(Relay_1, HIGH);
      digitalWrite(Relay_2, HIGH);
      digitalWrite(Relay_3, HIGH);
      digitalWrite(Relay_6, HIGH);
      delay_fun();

    } else if (t == 'w') {
      digitalWrite(Relay_2, HIGH);
      digitalWrite(Relay_4, HIGH);
      digitalWrite(Relay_5, HIGH);
      digitalWrite(Relay_6, HIGH);
      delay_fun();

    } else if (t == 'x') {
      digitalWrite(Relay_1, HIGH);
      digitalWrite(Relay_3, HIGH);
      digitalWrite(Relay_4, HIGH);
      digitalWrite(Relay_6, HIGH);
      delay_fun();

    } else if (t == 'y') {
      digitalWrite(Relay_1, HIGH);
      digitalWrite(Relay_3, HIGH);
      digitalWrite(Relay_4, HIGH);
      digitalWrite(Relay_5, HIGH);
      digitalWrite(Relay_6, HIGH);
      delay_fun();

    } else if (t == 'z') {
      digitalWrite(Relay_1, HIGH);
      digitalWrite(Relay_3, HIGH);
      digitalWrite(Relay_5, HIGH);
      digitalWrite(Relay_6, HIGH);
      delay_fun();

    } if (t == '1') {

      digitalWrite(Relay_1, HIGH);
      delay_fun();
    }


    else if (t == '2') {
      digitalWrite(Relay_1, HIGH);
      digitalWrite(Relay_2, HIGH);
      delay_fun();
    }

    else if (t == '3') {
      digitalWrite(Relay_1, HIGH);
      digitalWrite(Relay_4, HIGH);
      delay_fun();
    }

    else if (t == '4') {
      digitalWrite(Relay_1, HIGH);
      digitalWrite(Relay_4, HIGH);
      digitalWrite(Relay_5, HIGH);
      delay_fun();

    } else if (t == '5') {
      digitalWrite(Relay_1, HIGH);
      digitalWrite(Relay_5, HIGH);
      delay_fun();

    } else if (t == '6') {
      digitalWrite(Relay_1, HIGH);
      digitalWrite(Relay_2, HIGH);
      digitalWrite(Relay_4, HIGH);
      delay_fun();

    } else if (t == '7') {
      digitalWrite(Relay_1, HIGH);
      digitalWrite(Relay_2, HIGH);
      digitalWrite(Relay_4, HIGH);
      digitalWrite(Relay_5, HIGH);
      delay_fun();

    } else if (t == '8') {
      digitalWrite(Relay_1, HIGH);
      digitalWrite(Relay_2, HIGH);
      digitalWrite(Relay_5, HIGH);
      delay_fun();

    } else if (t == '9') {
      digitalWrite(Relay_2, HIGH);
      digitalWrite(Relay_4, HIGH);
      delay_fun();

    } else if (t == '0') {
      digitalWrite(Relay_2, HIGH);
      digitalWrite(Relay_4, HIGH);
      digitalWrite(Relay_5, HIGH);
      delay_fun();

    }  else if (t == '#') {
      digitalWrite(Relay_3, HIGH);
      digitalWrite(Relay_4, HIGH);
      digitalWrite(Relay_5, HIGH);
      digitalWrite(Relay_6, HIGH);
      delay_fun();

    }

    else {
      digitalWrite(Relay_1, LOW);
      digitalWrite(Relay_2, LOW);
      digitalWrite(Relay_3, LOW);
      digitalWrite(Relay_4, LOW);
      digitalWrite(Relay_5, LOW);
      digitalWrite(Relay_6, LOW);
      delay_fun();
    }









  }



}

void delay_fun() {
  delay(500);

}
