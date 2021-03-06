/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DALDAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface LDAPSearchSettings : NSObject {

	NSString* _searchDescription;
	NSString* _searchBase;
	unsigned long long _scope;

}

@property (nonatomic,retain) NSString * searchDescription;              //@synthesize searchDescription=_searchDescription - In the implementation block
@property (nonatomic,retain) NSString * searchBase;                     //@synthesize searchBase=_searchBase - In the implementation block
@property (assign,nonatomic) unsigned long long scope;                  //@synthesize scope=_scope - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)scope;
-(void)setScope:(unsigned long long)arg1 ;
-(void)setSearchBase:(NSString *)arg1 ;
-(NSString *)searchBase;
-(id)initWithSettingsDict:(id)arg1 ;
-(id)settingsDict;
-(void)setSearchDescription:(NSString *)arg1 ;
-(BOOL)hasSameScopeAndBaseAsOther:(id)arg1 ;
-(NSString *)searchDescription;
@end

