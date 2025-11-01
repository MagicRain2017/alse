#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
#include <iostream>

/**
 * @class Producto
 * @brief Representa un producto dentro del inventario de una tienda.
 *
 * La clase almacena el nombre, precio, stock y descuento del producto.
 * Permite actualizar precios, realizar ventas, reabastecer el inventario
 * y calcular el valor total del inventario.
 */
class Producto {
private:
    std::string nombre;
    float precio;
    int stock;
    int descuento;

public:
    /**
     * @brief Constructor que inicializa todos los atributos del producto.
     * @param n Nombre del producto.
     * @param p Precio unitario.
     * @param s Stock inicial.
     * @param d Descuento en porcentaje.
     */
    Producto(std::string n, float p, int s, int d);

    /**
     * @brief Actualiza el precio del producto.
     * @param nuevoPrecio Nuevo valor para el precio.
     */
    void actualizarPrecio(float nuevoPrecio);

    /**
     * @brief Muestra un resumen completo de las características del producto.
     */
    void resumenProducto() const;

    /**
     * @brief Vende una cantidad de unidades, si hay suficiente stock.
     * @param cantidad Número de unidades a vender.
     * @return Valor total de la venta considerando el descuento.
     */
    float vender(int cantidad);

    /**
     * @brief Incrementa el stock del producto.
     * @param cantidad Número de unidades a agregar al inventario.
     */
    void reabastecer(int cantidad);

    /**
     * @brief Calcula el valor total del inventario (precio × stock).
     * @return Valor total del inventario actual.
     */
    float consultarValorInventario() const;

    // Getters para el bono
    std::string getNombre() const { return nombre; }
    float getPrecio() const { return precio; }
};

#endif
