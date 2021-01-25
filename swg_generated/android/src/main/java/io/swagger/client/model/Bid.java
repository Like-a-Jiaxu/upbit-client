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

package io.swagger.client.model;

import java.math.BigDecimal;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

/**
 * 매수 시 제약사항
 **/
@ApiModel(description = "매수 시 제약사항")
public class Bid {
  
  @SerializedName("currency")
  private String currency = null;
  @SerializedName("price_unit")
  private String priceUnit = null;
  @SerializedName("min_total")
  private BigDecimal minTotal = null;

  /**
   * 화폐를 의미하는 영문 대문자 코드
   **/
  @ApiModelProperty(value = "화폐를 의미하는 영문 대문자 코드")
  public String getCurrency() {
    return currency;
  }
  public void setCurrency(String currency) {
    this.currency = currency;
  }

  /**
   * 주문금액 단위
   **/
  @ApiModelProperty(value = "주문금액 단위")
  public String getPriceUnit() {
    return priceUnit;
  }
  public void setPriceUnit(String priceUnit) {
    this.priceUnit = priceUnit;
  }

  /**
   * 최소 매도/매수 금액
   **/
  @ApiModelProperty(value = "최소 매도/매수 금액")
  public BigDecimal getMinTotal() {
    return minTotal;
  }
  public void setMinTotal(BigDecimal minTotal) {
    this.minTotal = minTotal;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Bid bid = (Bid) o;
    return (this.currency == null ? bid.currency == null : this.currency.equals(bid.currency)) &&
        (this.priceUnit == null ? bid.priceUnit == null : this.priceUnit.equals(bid.priceUnit)) &&
        (this.minTotal == null ? bid.minTotal == null : this.minTotal.equals(bid.minTotal));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.currency == null ? 0: this.currency.hashCode());
    result = 31 * result + (this.priceUnit == null ? 0: this.priceUnit.hashCode());
    result = 31 * result + (this.minTotal == null ? 0: this.minTotal.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Bid {\n");
    
    sb.append("  currency: ").append(currency).append("\n");
    sb.append("  priceUnit: ").append(priceUnit).append("\n");
    sb.append("  minTotal: ").append(minTotal).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}