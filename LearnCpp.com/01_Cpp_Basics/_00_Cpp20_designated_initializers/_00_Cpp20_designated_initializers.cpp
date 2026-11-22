
int main()
{
    // With C++20, we get a handy way of initializing data members. The new feature is called designated initializers.

    struct Point
    {
        double x{0.0};
        double y{0.0};
    };

    const Point p{.x = 10.0, .y = 20.0};

    const Point offset{.x{100.0}, .y{-100.0}};

    // It might not be clear what’s the order of days/month or month/days. With designated initializers, it’s effortless to see the order.
    struct ScreenConfig
    {
        bool autoScale{false};
        bool fullscreen{false};
        int bits{24};
        int planes{2};
    };

    // hmmmm.... ?
    ScreenConfig cfg{true, false, 8, 1};

    // better?
    ScreenConfig playbackCfg{
        .autoScale = true, .fullscreen = false, .bits = 8, .planes = 1};

    /*
    The following rules apply to designated initializers:

        Designated initializers work only for aggregate initialization
        Designators can only refer to non-static data members.
        Designators in the initialization expression must have the same order of data members in a class declaration.
        Not all data members must be specified in the expression.
        You cannot mix regular initialization with designaters.
        There can be only one designator for a data member.
        You cannot nest designators
    */

    return 0;
}
