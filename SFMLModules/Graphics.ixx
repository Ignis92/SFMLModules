module;

#include <SFML/Graphics.hpp>

export module sfml.graphics;

export import sfml.window;

export namespace sf {
    using sf::BlendMode;
    using sf::CircleShape;
    using sf::Color;
    using sf::ConvexShape;
    using sf::CoordinateType;
    using sf::Drawable;
    using sf::Font;
    namespace Glsl {
        using sf::Glsl::Vec2;
        using sf::Glsl::Ivec2;
        using sf::Glsl::Bvec2;
        using sf::Glsl::Vec3;
        using sf::Glsl::Ivec3;
        using sf::Glsl::Bvec3;
        using sf::Glsl::Vec4;
        using sf::Glsl::Ivec4;
        using sf::Glsl::Bvec4;
        using sf::Glsl::Mat3;
        using sf::Glsl::Mat4;
    }
    using sf::Glyph;
    using sf::Image;
    using sf::PrimitiveType;
    using sf::Rect;
    using sf::IntRect;
    using sf::FloatRect;
    using sf::RectangleShape;
    using sf::RenderStates;
    using sf::RenderTarget;
    using sf::RenderTexture;
    using sf::RenderWindow;
    using sf::Shader;
    using sf::Shape;
    using sf::Sprite;
    using sf::StencilMode;
    using sf::StencilValue;
    using sf::StencilComparison;
    using sf::StencilUpdateOperation;
    using sf::Text;
    using sf::Texture;
    using sf::swap;
    using sf::Transform;
    using sf::Transformable;
    using sf::Vertex;
    using sf::VertexArray;
    using sf::VertexBuffer;
    using sf::View;
}