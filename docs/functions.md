## Begin

Reset and initialize sensor to default state.

```Arduino
void begin()
```
<br /><br /><br />
***
<br />

## Motor PWM

Set motor **PWM**.

```Arduino
void motorSet(uint8_t motor_ch, uint8_t speed)
```

### Parameters

- `motor_ch` is a a channel number from `1` through `4`
- `speed` is a pwm level from `0` through `255`

<br /><br /><br />
***
<br />

## Motor Round

Set **number** of round.

```Arduino
void motorRound(uint8_t motor_ch, float round)
```

### Parameters

- `motor_ch` is a a channel number from `1` through `4`
- `round` is a float number from `0` through `4194304` (unit: round)

<br /><br /><br />
***
<br />

## Motor Invert

Set the select motor to invert the direction.

```Arduino
void motorInvert(uint8_t motor_ch, bool invert)
```

### Parameters

- `motor_ch` is a a channel number from `1` through `4`
- `invert` is a **boolean** logic between `true` or `false`

<br /><br /><br />
***
<br />

## Set Servo

Get **Roll** data.

```Arduino
void servoSet(uint8_t servo_ch, uint8_t angle)
```
### Return

- `servo_ch` is a channel number from `1` through `4`
- `angle` is a servo angle from `0` through `180` (unit: degree)
<br /><br /><br />
***
<br />


## Get Battery

Get battery **voltage** of controller.

```Arduino
float getBattery()
```

### Return

- A **float** number from `0` through `12.6`. (unit: v)
