///Constructors/Destructors
Room::Room(const sf::Vector2f& position, const sf::Vector2f& size, const sf::Color& color, const std::string& tag)
{
	this->shape.setPosition(position);
	this->shape.setSize(size);
	this->shape.setFillColor(color);
	this->shape.setOrigin(this->shape.getSize() / 2.f);

	this->centerPosition = position;
	this->leftSidePosition = sf::Vector2f(position.x - size.x / 2.f, position.y);
	this->rightSidePosition = sf::Vector2f(position.x + size.x / 2.f, position.y);
	this->upSidePosition = sf::Vector2f(position.x, position.y - size.y / 2.f);
	this->downSidePosition = sf::Vector2f(position.x, position.y + size.y / 2.f);

	this->tag = tag;
	this->isActive = true;
}

///Functions
void Room::render(sf::RenderTarget* target)
{
	target->draw(this->shape);
}
