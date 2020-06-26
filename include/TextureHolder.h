#ifndef TEXTUREHOLDER_H
#define TEXTUREHOLDER_H

#include <SFML/Graphics.hpp>
#include <map>

using namespace sf;

class TextureHolder {
public:
  TextureHolder();
  static Texture& GetTexture(std::string const& filename);
private:
  // map string to texture
  std::map<std::string, Texture> m_Textures;
  // Single Instance
  static TextureHolder * m_s_Instance;
};

#endif
