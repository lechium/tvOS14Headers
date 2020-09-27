/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/WFAccount.h>

@class NSString;

@interface WFPasswordAccount : WFAccount {

	NSString* _username;
	NSString* _password;

}

@property (nonatomic,copy) NSString * username;              //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * password;              //@synthesize password=_password - In the implementation block
+(id)accountWithUsername:(id)arg1 password:(id)arg2 ;
-(BOOL)isValid;
-(NSString *)password;
-(id)localizedName;
-(NSString *)username;
-(void)setPassword:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
@end
