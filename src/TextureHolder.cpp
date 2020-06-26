#include "../include/TextureHolder.h"

using namespace std;

TextureHolder * TextureHolder::m_s_Instance = nullptr;

TextureHolder::TextureHolder() {
  m_s_Instance = this;
}

Texture & TextureHolder::GetTexture(string const & filename) {
  // Get a reference to m_Texture using m_s_Instance
  auto & m = m_s_Instance -> m_Textures; // auto is map<string, Texture>
  // Create an iterator to hold a key-value-pair
  auto keyValuePair = m.find(filename); // auto is the map<>::iterator
  if (keyValuePair != m.end()) {
    // we find a match, return the texture
    return keyValuePair -> second;
  } else {
    auto & texture = m[filename];
    texture.loadFromFile(filename);
    return texture;
  }
}
