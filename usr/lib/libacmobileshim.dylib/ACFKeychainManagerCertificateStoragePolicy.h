/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
#import <libobjc.A.dylib/ACFCertificateStoragePolicy.h>

@class NSString;

@interface ACFKeychainManagerCertificateStoragePolicy : NSObject <ACFCertificateStoragePolicy>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)keychainManager;
-(BOOL)removeCertificateWithLabel:(id)arg1 realm:(id)arg2 ;
-(BOOL)storeCertificate:(SecCertificateRef)arg1 realm:(id)arg2 ;
-(SecCertificateRef)certificateWithLabel:(id)arg1 realm:(id)arg2 ;
@end
