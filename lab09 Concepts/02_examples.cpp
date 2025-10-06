#include <iostream>
#include <concepts>

/*
double halve(const double& value) {
    return value / 2;}
*/

/*
template<typename T>
T halve(const T& value) {
    return value / 2;}
 */

/*
template<typename FloatingPoint>
FloatingPoint halve(const FloatingPoint& value) {
    return value / 2;}
 */

/*
template<typename T>
requires std::floating_point<T>
T halve(const T& value) {
    return value / 2;}
 */

/*
template<typename T>
T halve(const T& value) requires std::floating_point<T> {
    return value / 2;}
 */

/*
template<std::floating_point T>
T halve(const T& value) {
    return value / 2;}
 */

std::floating_point auto halve(
        const std::floating_point auto& value) {
    return value / 2;}

int main() {
    const std::floating_point auto result = halve(3.1);
    std::cout << result << '\n';
}