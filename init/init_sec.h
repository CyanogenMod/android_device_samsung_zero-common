enum device_variant {
    UNKNOWN = -1,
    G920S,
    G920K,
    G920L,
    G920P,
    G920I,
    G920F
};

device_variant match(std::string bl)
{
    if (bl == "G920S") {
        return G920S;
    } else if (bl == "G920K") {
        return G920K;
    } else if (bl == "G920L") {
        return G920L;
    } else if (bl == "G920P") {
        return G920P;
    } else if (bl == "G920I") {
        return G920I;
    } else if (bl == "G920F") {
        return G920F;
    } else {
        return UNKNOWN;
    }
}
