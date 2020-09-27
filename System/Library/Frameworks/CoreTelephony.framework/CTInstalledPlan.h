/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CTPlanIdentifier, CTPlanTransferAttributes;

@interface CTInstalledPlan : NSObject <NSSecureCoding> {

	BOOL _isSelected;
	CTPlanIdentifier* _planID;
	CTPlanTransferAttributes* _transferAttributes;

}

@property (nonatomic,retain) CTPlanIdentifier * planID;                                  //@synthesize planID=_planID - In the implementation block
@property (assign,nonatomic) BOOL isSelected;                                            //@synthesize isSelected=_isSelected - In the implementation block
@property (nonatomic,retain) CTPlanTransferAttributes * transferAttributes;              //@synthesize transferAttributes=_transferAttributes - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)phoneNumber;
-(id)iccid;
-(id)carrierName;
-(CTPlanIdentifier *)planID;
-(BOOL)isSelected;
-(CTPlanTransferAttributes *)transferAttributes;
-(void)setPlanID:(CTPlanIdentifier *)arg1 ;
-(void)setIsSelected:(BOOL)arg1 ;
-(void)setTransferAttributes:(CTPlanTransferAttributes *)arg1 ;
@end
