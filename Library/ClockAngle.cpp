double clockAngle(double hour, double minute) {
    if(hour == 12) hour = 0;
    if(minute == 60) minute = 0;

    double angleHour = 0.5 * (hour * 60 + minute);
    double angleMinute = 6 * minute;
    double angle = abs(angleHour - angleMinute);

    return min(angle, 360 - angle);
}