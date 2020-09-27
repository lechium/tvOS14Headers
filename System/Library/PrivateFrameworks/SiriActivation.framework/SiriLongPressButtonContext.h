/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:42 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriActivation/SiriContext.h>

@interface SiriLongPressButtonContext : SiriContext {

	double _buttonDownTimestamp;

}

@property (assign,nonatomic) double buttonDownTimestamp;              //@synthesize buttonDownTimestamp=_buttonDownTimestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)buttonDownTimestamp;
-(void)setButtonDownTimestamp:(double)arg1 ;
@end
