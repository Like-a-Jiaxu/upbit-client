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

#include "SWGOrderApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"
#include "SWGQObjectWrapper.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {

SWGOrderApi::SWGOrderApi() {}

SWGOrderApi::~SWGOrderApi() {}

SWGOrderApi::SWGOrderApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGOrderApi::order_cancel(QString* uuid, QString* identifier) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/order");


    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("uuid"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(uuid)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("identifier"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(identifier)));


    SWGHttpRequestWorker *worker = new SWGHttpRequestWorker();
    SWGHttpRequestInput input(fullPath, "DELETE");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &SWGHttpRequestWorker::on_execution_finished,
            this,
            &SWGOrderApi::order_cancelCallback);

    worker->execute(&input);
}

void
SWGOrderApi::order_cancelCallback(SWGHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    QString json(worker->response);
    SWGOrder* output = static_cast<SWGOrder*>(create(json, QString("SWGOrder")));
    auto wrapper = new SWGQObjectWrapper<SWGOrder*> (output);
    wrapper->deleteLater();
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit order_cancelSignal(output);
    } else {
        emit order_cancelSignalE(output, error_type, error_str);
        emit order_cancelSignalEFull(worker, error_type, error_str);
    }
}

void
SWGOrderApi::order_chance(QString* market) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/orders/chance");


    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("market"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(market)));


    SWGHttpRequestWorker *worker = new SWGHttpRequestWorker();
    SWGHttpRequestInput input(fullPath, "GET");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &SWGHttpRequestWorker::on_execution_finished,
            this,
            &SWGOrderApi::order_chanceCallback);

    worker->execute(&input);
}

void
SWGOrderApi::order_chanceCallback(SWGHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    QString json(worker->response);
    SWGOrderChance* output = static_cast<SWGOrderChance*>(create(json, QString("SWGOrderChance")));
    auto wrapper = new SWGQObjectWrapper<SWGOrderChance*> (output);
    wrapper->deleteLater();
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit order_chanceSignal(output);
    } else {
        emit order_chanceSignalE(output, error_type, error_str);
        emit order_chanceSignalEFull(worker, error_type, error_str);
    }
}

void
SWGOrderApi::order_info(QString* uuid, QString* identifier) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/order");


    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("uuid"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(uuid)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("identifier"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(identifier)));


    SWGHttpRequestWorker *worker = new SWGHttpRequestWorker();
    SWGHttpRequestInput input(fullPath, "GET");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &SWGHttpRequestWorker::on_execution_finished,
            this,
            &SWGOrderApi::order_infoCallback);

    worker->execute(&input);
}

void
SWGOrderApi::order_infoCallback(SWGHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    QString json(worker->response);
    SWGOrderInfo* output = static_cast<SWGOrderInfo*>(create(json, QString("SWGOrderInfo")));
    auto wrapper = new SWGQObjectWrapper<SWGOrderInfo*> (output);
    wrapper->deleteLater();
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit order_infoSignal(output);
    } else {
        emit order_infoSignalE(output, error_type, error_str);
        emit order_infoSignalEFull(worker, error_type, error_str);
    }
}

void
SWGOrderApi::order_infoAll(QString* market, QString* state, QList<QString*>* states, QList<QString*>* uuids, QList<QString*>* identifiers, SWGNumber* page, SWGNumber* limit, QString* order_by) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/orders");


    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("market"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(market)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("state"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(state)));



    if (states->size() > 0) {
      if (QString("multi").indexOf("multi") == 0) {
        foreach(QString* t, *states) {
          if (fullPath.indexOf("?") > 0)
            fullPath.append("&");
          else
            fullPath.append("?");
          fullPath.append("states=").append(stringValue(t));
        }
      }
      else if (QString("multi").indexOf("ssv") == 0) {
        if (fullPath.indexOf("?") > 0)
          fullPath.append("&");
        else
          fullPath.append("?");
        fullPath.append("states=");
        qint32 count = 0;
        foreach(QString* t, *states) {
          if (count > 0) {
            fullPath.append(" ");
          }
          fullPath.append(stringValue(t));
        }
      }
      else if (QString("multi").indexOf("tsv") == 0) {
        if (fullPath.indexOf("?") > 0)
          fullPath.append("&");
        else
          fullPath.append("?");
        fullPath.append("states=");
        qint32 count = 0;
        foreach(QString* t, *states) {
          if (count > 0) {
            fullPath.append("\t");
          }
          fullPath.append(stringValue(t));
        }
      }
    }



    if (uuids->size() > 0) {
      if (QString("multi").indexOf("multi") == 0) {
        foreach(QString* t, *uuids) {
          if (fullPath.indexOf("?") > 0)
            fullPath.append("&");
          else
            fullPath.append("?");
          fullPath.append("uuids=").append(stringValue(t));
        }
      }
      else if (QString("multi").indexOf("ssv") == 0) {
        if (fullPath.indexOf("?") > 0)
          fullPath.append("&");
        else
          fullPath.append("?");
        fullPath.append("uuids=");
        qint32 count = 0;
        foreach(QString* t, *uuids) {
          if (count > 0) {
            fullPath.append(" ");
          }
          fullPath.append(stringValue(t));
        }
      }
      else if (QString("multi").indexOf("tsv") == 0) {
        if (fullPath.indexOf("?") > 0)
          fullPath.append("&");
        else
          fullPath.append("?");
        fullPath.append("uuids=");
        qint32 count = 0;
        foreach(QString* t, *uuids) {
          if (count > 0) {
            fullPath.append("\t");
          }
          fullPath.append(stringValue(t));
        }
      }
    }



    if (identifiers->size() > 0) {
      if (QString("multi").indexOf("multi") == 0) {
        foreach(QString* t, *identifiers) {
          if (fullPath.indexOf("?") > 0)
            fullPath.append("&");
          else
            fullPath.append("?");
          fullPath.append("identifiers=").append(stringValue(t));
        }
      }
      else if (QString("multi").indexOf("ssv") == 0) {
        if (fullPath.indexOf("?") > 0)
          fullPath.append("&");
        else
          fullPath.append("?");
        fullPath.append("identifiers=");
        qint32 count = 0;
        foreach(QString* t, *identifiers) {
          if (count > 0) {
            fullPath.append(" ");
          }
          fullPath.append(stringValue(t));
        }
      }
      else if (QString("multi").indexOf("tsv") == 0) {
        if (fullPath.indexOf("?") > 0)
          fullPath.append("&");
        else
          fullPath.append("?");
        fullPath.append("identifiers=");
        qint32 count = 0;
        foreach(QString* t, *identifiers) {
          if (count > 0) {
            fullPath.append("\t");
          }
          fullPath.append(stringValue(t));
        }
      }
    }

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("page"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(page)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("limit"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(limit)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("order_by"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(order_by)));


    SWGHttpRequestWorker *worker = new SWGHttpRequestWorker();
    SWGHttpRequestInput input(fullPath, "GET");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &SWGHttpRequestWorker::on_execution_finished,
            this,
            &SWGOrderApi::order_infoAllCallback);

    worker->execute(&input);
}

void
SWGOrderApi::order_infoAllCallback(SWGHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    QList<SWGOrder*>* output = new QList<SWGOrder*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();
    auto wrapper = new SWGQObjectWrapper<QList<SWGOrder*>*> (output);
    wrapper->deleteLater();
    foreach(QJsonValue obj, jsonArray) {
        SWGOrder* o = new SWGOrder();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        auto objwrapper = new SWGQObjectWrapper<SWGOrder*> (o);
        objwrapper->deleteLater();
        output->append(o);
    }
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit order_infoAllSignal(output);
    } else {
        emit order_infoAllSignalE(output, error_type, error_str);
        emit order_infoAllSignalEFull(worker, error_type, error_str);
    }
}

void
SWGOrderApi::order_new(QString* market, QString* side, QString* ord_type, QString* volume, QString* price, QString* identifier) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/orders");



    SWGHttpRequestWorker *worker = new SWGHttpRequestWorker();
    SWGHttpRequestInput input(fullPath, "POST");

    if (market != nullptr) {
        input.add_var("market", *market);
    }
    if (side != nullptr) {
        input.add_var("side", *side);
    }
    if (volume != nullptr) {
        input.add_var("volume", *volume);
    }
    if (price != nullptr) {
        input.add_var("price", *price);
    }
    if (ord_type != nullptr) {
        input.add_var("ord_type", *ord_type);
    }
    if (identifier != nullptr) {
        input.add_var("identifier", *identifier);
    }




    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &SWGHttpRequestWorker::on_execution_finished,
            this,
            &SWGOrderApi::order_newCallback);

    worker->execute(&input);
}

void
SWGOrderApi::order_newCallback(SWGHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    QString json(worker->response);
    SWGNewOrder* output = static_cast<SWGNewOrder*>(create(json, QString("SWGNewOrder")));
    auto wrapper = new SWGQObjectWrapper<SWGNewOrder*> (output);
    wrapper->deleteLater();
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit order_newSignal(output);
    } else {
        emit order_newSignalE(output, error_type, error_str);
        emit order_newSignalEFull(worker, error_type, error_str);
    }
}

void
SWGOrderApi::order_orderbook(QList<QString*>* markets) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/orderbook");




    if (markets->size() > 0) {
      if (QString("multi").indexOf("multi") == 0) {
        foreach(QString* t, *markets) {
          if (fullPath.indexOf("?") > 0)
            fullPath.append("&");
          else
            fullPath.append("?");
          fullPath.append("markets=").append(stringValue(t));
        }
      }
      else if (QString("multi").indexOf("ssv") == 0) {
        if (fullPath.indexOf("?") > 0)
          fullPath.append("&");
        else
          fullPath.append("?");
        fullPath.append("markets=");
        qint32 count = 0;
        foreach(QString* t, *markets) {
          if (count > 0) {
            fullPath.append(" ");
          }
          fullPath.append(stringValue(t));
        }
      }
      else if (QString("multi").indexOf("tsv") == 0) {
        if (fullPath.indexOf("?") > 0)
          fullPath.append("&");
        else
          fullPath.append("?");
        fullPath.append("markets=");
        qint32 count = 0;
        foreach(QString* t, *markets) {
          if (count > 0) {
            fullPath.append("\t");
          }
          fullPath.append(stringValue(t));
        }
      }
    }


    SWGHttpRequestWorker *worker = new SWGHttpRequestWorker();
    SWGHttpRequestInput input(fullPath, "GET");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &SWGHttpRequestWorker::on_execution_finished,
            this,
            &SWGOrderApi::order_orderbookCallback);

    worker->execute(&input);
}

void
SWGOrderApi::order_orderbookCallback(SWGHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    QList<SWGOrderbook*>* output = new QList<SWGOrderbook*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();
    auto wrapper = new SWGQObjectWrapper<QList<SWGOrderbook*>*> (output);
    wrapper->deleteLater();
    foreach(QJsonValue obj, jsonArray) {
        SWGOrderbook* o = new SWGOrderbook();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        auto objwrapper = new SWGQObjectWrapper<SWGOrderbook*> (o);
        objwrapper->deleteLater();
        output->append(o);
    }
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit order_orderbookSignal(output);
    } else {
        emit order_orderbookSignalE(output, error_type, error_str);
        emit order_orderbookSignalEFull(worker, error_type, error_str);
    }
}


}
