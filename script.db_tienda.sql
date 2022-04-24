SELECT * FROM db_tienda.proveedor;
insert into db_tienda.proveedor(proveedor,nit,direccion,telefono)
values('Samsung','77895','Guatemala city','45878596');
insert into db_tienda.proveedor(proveedor,nit,direccion,telefono)
values('Xiaomi','55896','Guatemala zona 10','55214587');
insert into db_tienda.proveedor(proveedor,nit,direccion,telefono)
values('Motorola','547896','Guatemala mixco','63254187');
insert into db_tienda.proveedor(proveedor,nit,direccion,telefono)
values('HP','996584','Guatemala zona 15','22458710');
insert into db_tienda.proveedor(proveedor,nit,direccion,telefono)
values('RNC','587424','Guatemala zona 17','56321048');
update db_tienda.proveedor set proveedor='Epson',nit='458796',direccion='Guatemala zona 10',telefono='58742365'
where id_proveedor=4;
delete from db_tienda.proveedor where id_proveedor = '6';
