/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSUIWebActionRunnable.h>

@class ACAccount, AMSUIWebClientContext, NSString;

@interface AMSUIWebAccountAction : NSObject <AMSUIWebActionRunnable> {

	BOOL _active;
	ACAccount* _account;
	AMSUIWebClientContext* _context;
	NSString* _creditString;

}

@property (nonatomic,retain) ACAccount * account;                          //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) BOOL active;                                  //@synthesize active=_active - In the implementation block
@property (nonatomic,retain) AMSUIWebClientContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSString * creditString;                      //@synthesize creditString=_creditString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AMSUIWebClientContext *)context;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)active;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)setCreditString:(NSString *)arg1 ;
-(NSString *)creditString;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
@end

