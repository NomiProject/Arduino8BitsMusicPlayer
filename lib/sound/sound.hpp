class Sound{
    private:
        unsigned short pin, pinBtMario, pinBtSw;
        void beep(int freqHz, long timeMs);

    public:
        Sound(unsigned short speaker, unsigned short btMario, unsigned short btSw);
        void mario();
        void starwars();
        bool onPushMario();
        bool onPushSt();
};
