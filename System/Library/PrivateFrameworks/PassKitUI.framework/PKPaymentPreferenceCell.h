/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKTableViewCell.h>

@class UIColor;

@interface PKPaymentPreferenceCell : PKTableViewCell {

	UIColor* _errorColor;
	BOOL _hasError;

}

@property (assign,nonatomic) BOOL hasError;              //@synthesize hasError=_hasError - In the implementation block
-(void)dealloc;
-(BOOL)hasError;
-(void)prepareForReuse;
-(void)setHasError:(BOOL)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end
