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

/*
 * SWGErrorInfo.h
 *
 * Error 상세 정보
 */

#ifndef SWGErrorInfo_H_
#define SWGErrorInfo_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"

namespace Swagger {

class SWGErrorInfo: public SWGObject {
public:
    SWGErrorInfo();
    SWGErrorInfo(QString json);
    ~SWGErrorInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    SWGErrorInfo* fromJson(QString jsonString) override;

    QString* getMessage();
    void setMessage(QString* message);

    QString* getName();
    void setName(QString* name);


    virtual bool isSet() override;

private:
    QString* message;
    bool m_message_isSet;

    QString* name;
    bool m_name_isSet;

};

}

#endif /* SWGErrorInfo_H_ */