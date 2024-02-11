#include <vector>
#include <cstdint>

class AES {
public:
    AES(const std::vector<uint8_t>& key) {
        KeyExpansion(key, expandedKey);
    }

    std::vector<uint8_t> Encrypt(const std::vector<uint8_t>& plaintext, const std::vector<uint8_t>& key) {
        std::vector<uint8_t> plaintext(ciphertext.size());
        //TODO:
        //Initial round: AddRoundKey
        //Main rounds: InvShiftRows, InvSubBytes, AddRoundKey, InvMixColumns
        //Final round: InvShiftRows, InvSubBytes, AddRoundKey
        return plaintext; // Placeholder return
    }

    std::vector<uint8_t> Decrypt(const std::vector<uint8_t>& ciphertext, const std::vector<uint8_t>& key) {
        //TODO: Implementation
    }

private:
    std::vector<uint32_t> expandedKey;
    std::vector<uint8_t> state;
    static inline const std::array<uint8_t, 256> sbox = {
        //Sbox values
        0x63, 0x7C, 0x77, 0x7B, 0xF2, 0x6B, 0x6F, 0xC5, 0x30, 0x01, 0x67, 0x2B, 0xFE, 0xD7, 0xAB, 0x76,
        // TODO: Fill in the rest
    };

    void keyExpansion(const std::vector<uint8_t>& key, std::vector<uint32_t>& expandedKey) {
        // TODO: Implement key expansion
    }

    void SubBytes() {
        for (size_t i = 0; i < state.size(); ++i) {
            state[i] = sbox[state[i]];
        }
    }

    void ShiftRows() {
        //TODO: Implementation
    }

    void MixColumns() {
        //TODO: Implementation
    }

    void AddRoundKey() {
        //TODO: Implementation
    }
}
