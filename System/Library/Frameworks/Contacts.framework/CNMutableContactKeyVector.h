/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNContactKeyVector.h>

@interface CNMutableContactKeyVector : CNContactKeyVector
+(id)new;
+(id)freezeIfClassIsImmutable:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)freeze;
-(void)addKey:(id)arg1 ;
-(void)unionKeyVector:(id)arg1 ;
-(id)initWithKeyVector:(id)arg1 ;
-(void)addKeys:(id)arg1 ;
-(void)minusKeyVector:(id)arg1 ;
-(void)intersectKeyVector:(id)arg1 ;
-(void)subtractKey:(id)arg1 ;
-(void)subtractKeys:(id)arg1 ;
@end

