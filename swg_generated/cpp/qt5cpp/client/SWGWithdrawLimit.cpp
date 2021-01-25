/**
 * Upbit Open API
 * ## REST API for Upbit Exchange - Base URL: [https://api.upbit.com] - Official Upbit API Documents: [https://docs.upbit.com] - Official Support email: [open-api@upbit.com] 
 *
 * OpenAPI spec version: 1.0.0
 * Contact: ujhin942@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGWithdrawLimit.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGWithdrawLimit::SWGWithdrawLimit(QString json) {
    init();
    this->fromJson(json);
}

SWGWithdrawLimit::SWGWithdrawLimit() {
    init();
}

SWGWithdrawLimit::~SWGWithdrawLimit() {
    this->cleanup();
}

void
SWGWithdrawLimit::init() {
    currency = new QString("");
    m_currency_isSet = false;
    minimum = new QString("");
    m_minimum_isSet = false;
    onetime = new QString("");
    m_onetime_isSet = false;
    daily = new QString("");
    m_daily_isSet = false;
    remaining_daily = new QString("");
    m_remaining_daily_isSet = false;
    remaining_daily_krw = new QString("");
    m_remaining_daily_krw_isSet = false;
    fixed = 0.0;
    m_fixed_isSet = false;
    can_withdraw = false;
    m_can_withdraw_isSet = false;
}

void
SWGWithdrawLimit::cleanup() {
    if(currency != nullptr) { 
        delete currency;
    }
    if(minimum != nullptr) { 
        delete minimum;
    }
    if(onetime != nullptr) { 
        delete onetime;
    }
    if(daily != nullptr) { 
        delete daily;
    }
    if(remaining_daily != nullptr) { 
        delete remaining_daily;
    }
    if(remaining_daily_krw != nullptr) { 
        delete remaining_daily_krw;
    }
    if(fixed != nullptr) { 
        delete fixed;
    }

}

SWGWithdrawLimit*
SWGWithdrawLimit::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGWithdrawLimit::fromJsonObject(QJsonObject pJson) {
    ::Swagger::setValue(&currency, pJson["currency"], "QString", "QString");
    
    ::Swagger::setValue(&minimum, pJson["minimum"], "QString", "QString");
    
    ::Swagger::setValue(&onetime, pJson["onetime"], "QString", "QString");
    
    ::Swagger::setValue(&daily, pJson["daily"], "QString", "QString");
    
    ::Swagger::setValue(&remaining_daily, pJson["remaining_daily"], "QString", "QString");
    
    ::Swagger::setValue(&remaining_daily_krw, pJson["remaining_daily_krw"], "QString", "QString");
    
    ::Swagger::setValue(&fixed, pJson["fixed"], "SWGNumber", "SWGNumber");
    
    ::Swagger::setValue(&can_withdraw, pJson["can_withdraw"], "bool", "");
    
}

QString
SWGWithdrawLimit::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
SWGWithdrawLimit::asJsonObject() {
    QJsonObject obj;
    if(currency != nullptr && *currency != QString("")){
        toJsonValue(QString("currency"), currency, obj, QString("QString"));
    }
    if(minimum != nullptr && *minimum != QString("")){
        toJsonValue(QString("minimum"), minimum, obj, QString("QString"));
    }
    if(onetime != nullptr && *onetime != QString("")){
        toJsonValue(QString("onetime"), onetime, obj, QString("QString"));
    }
    if(daily != nullptr && *daily != QString("")){
        toJsonValue(QString("daily"), daily, obj, QString("QString"));
    }
    if(remaining_daily != nullptr && *remaining_daily != QString("")){
        toJsonValue(QString("remaining_daily"), remaining_daily, obj, QString("QString"));
    }
    if(remaining_daily_krw != nullptr && *remaining_daily_krw != QString("")){
        toJsonValue(QString("remaining_daily_krw"), remaining_daily_krw, obj, QString("QString"));
    }
    if((fixed != nullptr) && (fixed->isSet())){
        toJsonValue(QString("fixed"), fixed, obj, QString("SWGNumber"));
    }
    if(m_can_withdraw_isSet){
        obj.insert("can_withdraw", QJsonValue(can_withdraw));
    }

    return obj;
}

QString*
SWGWithdrawLimit::getCurrency() {
    return currency;
}
void
SWGWithdrawLimit::setCurrency(QString* currency) {
    this->currency = currency;
    this->m_currency_isSet = true;
}

QString*
SWGWithdrawLimit::getMinimum() {
    return minimum;
}
void
SWGWithdrawLimit::setMinimum(QString* minimum) {
    this->minimum = minimum;
    this->m_minimum_isSet = true;
}

QString*
SWGWithdrawLimit::getOnetime() {
    return onetime;
}
void
SWGWithdrawLimit::setOnetime(QString* onetime) {
    this->onetime = onetime;
    this->m_onetime_isSet = true;
}

QString*
SWGWithdrawLimit::getDaily() {
    return daily;
}
void
SWGWithdrawLimit::setDaily(QString* daily) {
    this->daily = daily;
    this->m_daily_isSet = true;
}

QString*
SWGWithdrawLimit::getRemainingDaily() {
    return remaining_daily;
}
void
SWGWithdrawLimit::setRemainingDaily(QString* remaining_daily) {
    this->remaining_daily = remaining_daily;
    this->m_remaining_daily_isSet = true;
}

QString*
SWGWithdrawLimit::getRemainingDailyKrw() {
    return remaining_daily_krw;
}
void
SWGWithdrawLimit::setRemainingDailyKrw(QString* remaining_daily_krw) {
    this->remaining_daily_krw = remaining_daily_krw;
    this->m_remaining_daily_krw_isSet = true;
}

SWGNumber*
SWGWithdrawLimit::getFixed() {
    return fixed;
}
void
SWGWithdrawLimit::setFixed(SWGNumber* fixed) {
    this->fixed = fixed;
    this->m_fixed_isSet = true;
}

bool
SWGWithdrawLimit::isCanWithdraw() {
    return can_withdraw;
}
void
SWGWithdrawLimit::setCanWithdraw(bool can_withdraw) {
    this->can_withdraw = can_withdraw;
    this->m_can_withdraw_isSet = true;
}


bool
SWGWithdrawLimit::isSet(){
    bool isObjectUpdated = false;
    do{
        if(currency != nullptr && *currency != QString("")){ isObjectUpdated = true; break;}
        if(minimum != nullptr && *minimum != QString("")){ isObjectUpdated = true; break;}
        if(onetime != nullptr && *onetime != QString("")){ isObjectUpdated = true; break;}
        if(daily != nullptr && *daily != QString("")){ isObjectUpdated = true; break;}
        if(remaining_daily != nullptr && *remaining_daily != QString("")){ isObjectUpdated = true; break;}
        if(remaining_daily_krw != nullptr && *remaining_daily_krw != QString("")){ isObjectUpdated = true; break;}
        if(fixed != nullptr && fixed->isSet()){ isObjectUpdated = true; break;}
        if(m_can_withdraw_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}
