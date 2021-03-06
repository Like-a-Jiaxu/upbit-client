/*
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

import java.util.Objects;
import java.util.Arrays;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import io.swagger.client.model.AskAccount;
import io.swagger.client.model.BidAccount;
import io.swagger.client.model.Market;
import java.io.IOException;

/**
 * OrderChance
 */
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2021-02-05T03:34:59.277Z")
public class OrderChance {
  @SerializedName("bid_fee")
  private String bidFee = null;

  @SerializedName("ask_fee")
  private String askFee = null;

  @SerializedName("market")
  private Market market = null;

  @SerializedName("bid_account")
  private BidAccount bidAccount = null;

  @SerializedName("ask_account")
  private AskAccount askAccount = null;

  public OrderChance bidFee(String bidFee) {
    this.bidFee = bidFee;
    return this;
  }

   /**
   * 매수 수수료 비율
   * @return bidFee
  **/
  @ApiModelProperty(example = "0.0015", value = "매수 수수료 비율")
  public String getBidFee() {
    return bidFee;
  }

  public void setBidFee(String bidFee) {
    this.bidFee = bidFee;
  }

  public OrderChance askFee(String askFee) {
    this.askFee = askFee;
    return this;
  }

   /**
   * 매도 수수료 비율
   * @return askFee
  **/
  @ApiModelProperty(example = "0.0015", value = "매도 수수료 비율")
  public String getAskFee() {
    return askFee;
  }

  public void setAskFee(String askFee) {
    this.askFee = askFee;
  }

  public OrderChance market(Market market) {
    this.market = market;
    return this;
  }

   /**
   * Get market
   * @return market
  **/
  @ApiModelProperty(value = "")
  public Market getMarket() {
    return market;
  }

  public void setMarket(Market market) {
    this.market = market;
  }

  public OrderChance bidAccount(BidAccount bidAccount) {
    this.bidAccount = bidAccount;
    return this;
  }

   /**
   * Get bidAccount
   * @return bidAccount
  **/
  @ApiModelProperty(value = "")
  public BidAccount getBidAccount() {
    return bidAccount;
  }

  public void setBidAccount(BidAccount bidAccount) {
    this.bidAccount = bidAccount;
  }

  public OrderChance askAccount(AskAccount askAccount) {
    this.askAccount = askAccount;
    return this;
  }

   /**
   * Get askAccount
   * @return askAccount
  **/
  @ApiModelProperty(value = "")
  public AskAccount getAskAccount() {
    return askAccount;
  }

  public void setAskAccount(AskAccount askAccount) {
    this.askAccount = askAccount;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrderChance orderChance = (OrderChance) o;
    return Objects.equals(this.bidFee, orderChance.bidFee) &&
        Objects.equals(this.askFee, orderChance.askFee) &&
        Objects.equals(this.market, orderChance.market) &&
        Objects.equals(this.bidAccount, orderChance.bidAccount) &&
        Objects.equals(this.askAccount, orderChance.askAccount);
  }

  @Override
  public int hashCode() {
    return Objects.hash(bidFee, askFee, market, bidAccount, askAccount);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrderChance {\n");
    
    sb.append("    bidFee: ").append(toIndentedString(bidFee)).append("\n");
    sb.append("    askFee: ").append(toIndentedString(askFee)).append("\n");
    sb.append("    market: ").append(toIndentedString(market)).append("\n");
    sb.append("    bidAccount: ").append(toIndentedString(bidAccount)).append("\n");
    sb.append("    askAccount: ").append(toIndentedString(askAccount)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }

}

