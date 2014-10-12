/*
 * XMPPController.hpp
 *
 *  Created on: 12 oct. 2014
 *      Author: pierre
 */

#ifndef LOGINCONTROLLER_HPP_
#define LOGINCONTROLLER_HPP_


#include "XMPPService.hpp"

class LoginController : public QObject {
    Q_OBJECT;

private:
    QString m_User;
    QString m_Password;

public:
    LoginController(QObject *parent = 0);

public Q_SLOTS:
    void login(const QString& login, const QString& password);
    void logOut();
    bool isLogged();

    void connected();

Q_SIGNALS:
    void complete();



private:
    void saveUserName();
    void loadUserName();

};


#endif /* LOGINCONTROLLER_HPP_ */
