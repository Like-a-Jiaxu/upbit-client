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
 * SWGWithdraw.h
 *
 * 
 */

#ifndef SWGWithdraw_H_
#define SWGWithdraw_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"

namespace Swagger {

class SWGWithdraw: public SWGObject {
public:
    SWGWithdraw();
    SWGWithdraw(QString json);
    ~SWGWithdraw();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    SWGWithdraw* fromJson(QString jsonString) override;

    QString* getType();
    void setType(QString* type);

    QString* getUuid();
    void setUuid(QString* uuid);

    QString* getCurrency();
    void setCurrency(QString* currency);

    QString* getTxid();
    void setTxid(QString* txid);

    QString* getState();
    void setState(QString* state);

    QString* getCreatedAt();
    void setCreatedAt(QString* created_at);

    QString* getDoneAt();
    void setDoneAt(QString* done_at);

    QString* getAmount();
    void setAmount(QString* amount);

    QString* getFee();
    void setFee(QString* fee);

    QString* getTransactionType();
    void setTransactionType(QString* transaction_type);


    virtual bool isSet() override;

private:
    QString* type;
    bool m_type_isSet;

    QString* uuid;
    bool m_uuid_isSet;

    QString* currency;
    bool m_currency_isSet;

    QString* txid;
    bool m_txid_isSet;

    QString* state;
    bool m_state_isSet;

    QString* created_at;
    bool m_created_at_isSet;

    QString* done_at;
    bool m_done_at_isSet;

    QString* amount;
    bool m_amount_isSet;

    QString* fee;
    bool m_fee_isSet;

    QString* transaction_type;
    bool m_transaction_type_isSet;

};

}

#endif /* SWGWithdraw_H_ */