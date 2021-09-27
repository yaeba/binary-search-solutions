import java.util.*;

class Solution {
    public int solve(int hour, int minutes) {
        // angle of each hour is 360/12 = 30
        // angle of each minute is 360/60 = 6
        double minuteAngle = minutes * 6;
        double hourAngle = hour % 12 * 30.0 + (minutes * 1.0 / 60) * 30;
        double diff = Math.abs(hourAngle - minuteAngle);
        double smallestDiff = diff > 180 ? 360 - diff : diff;
        return (int) Math.floor(smallestDiff);
    }
}
