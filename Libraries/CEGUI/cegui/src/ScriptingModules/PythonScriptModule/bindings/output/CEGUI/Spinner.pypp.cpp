// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "Spinner.pypp.hpp"

namespace bp = boost::python;

struct Spinner_wrapper : CEGUI::Spinner, bp::wrapper< CEGUI::Spinner > {

    Spinner_wrapper(::CEGUI::String const & type, ::CEGUI::String const & name )
    : CEGUI::Spinner( boost::ref(type), boost::ref(name) )
      , bp::wrapper< CEGUI::Spinner >(){
        // constructor
    
    }

    virtual void initialiseComponents(  ) {
        if( bp::override func_initialiseComponents = this->get_override( "initialiseComponents" ) )
            func_initialiseComponents(  );
        else{
            this->CEGUI::Spinner::initialiseComponents(  );
        }
    }
    
    void default_initialiseComponents(  ) {
        CEGUI::Spinner::initialiseComponents( );
    }

    virtual void beginInitialisation(  ) {
        if( bp::override func_beginInitialisation = this->get_override( "beginInitialisation" ) )
            func_beginInitialisation(  );
        else{
            this->CEGUI::Window::beginInitialisation(  );
        }
    }
    
    void default_beginInitialisation(  ) {
        CEGUI::Window::beginInitialisation( );
    }

    virtual void cloneChildWidgetsTo( ::CEGUI::Window & target ) const  {
        if( bp::override func_cloneChildWidgetsTo = this->get_override( "cloneChildWidgetsTo" ) )
            func_cloneChildWidgetsTo( boost::ref(target) );
        else{
            this->CEGUI::Window::cloneChildWidgetsTo( boost::ref(target) );
        }
    }
    
    void default_cloneChildWidgetsTo( ::CEGUI::Window & target ) const  {
        CEGUI::Window::cloneChildWidgetsTo( boost::ref(target) );
    }

    virtual void clonePropertiesTo( ::CEGUI::Window & target ) const  {
        if( bp::override func_clonePropertiesTo = this->get_override( "clonePropertiesTo" ) )
            func_clonePropertiesTo( boost::ref(target) );
        else{
            this->CEGUI::Window::clonePropertiesTo( boost::ref(target) );
        }
    }
    
    void default_clonePropertiesTo( ::CEGUI::Window & target ) const  {
        CEGUI::Window::clonePropertiesTo( boost::ref(target) );
    }

    virtual void destroy(  ) {
        if( bp::override func_destroy = this->get_override( "destroy" ) )
            func_destroy(  );
        else{
            this->CEGUI::Window::destroy(  );
        }
    }
    
    void default_destroy(  ) {
        CEGUI::Window::destroy( );
    }

    virtual void endInitialisation(  ) {
        if( bp::override func_endInitialisation = this->get_override( "endInitialisation" ) )
            func_endInitialisation(  );
        else{
            this->CEGUI::Window::endInitialisation(  );
        }
    }
    
    void default_endInitialisation(  ) {
        CEGUI::Window::endInitialisation( );
    }

    virtual void fireEvent( ::CEGUI::String const & name, ::CEGUI::EventArgs & args, ::CEGUI::String const & eventNamespace="" ) {
        if( bp::override func_fireEvent = this->get_override( "fireEvent" ) )
            func_fireEvent( boost::ref(name), boost::ref(args), boost::ref(eventNamespace) );
        else{
            this->CEGUI::EventSet::fireEvent( boost::ref(name), boost::ref(args), boost::ref(eventNamespace) );
        }
    }
    
    void default_fireEvent( ::CEGUI::String const & name, ::CEGUI::EventArgs & args, ::CEGUI::String const & eventNamespace="" ) {
        CEGUI::EventSet::fireEvent( boost::ref(name), boost::ref(args), boost::ref(eventNamespace) );
    }

    virtual void getRenderingContext_impl( ::CEGUI::RenderingContext & ctx ) const  {
        if( bp::override func_getRenderingContext_impl = this->get_override( "getRenderingContext_impl" ) )
            func_getRenderingContext_impl( boost::ref(ctx) );
        else{
            this->CEGUI::Window::getRenderingContext_impl( boost::ref(ctx) );
        }
    }
    
    void default_getRenderingContext_impl( ::CEGUI::RenderingContext & ctx ) const  {
        CEGUI::Window::getRenderingContext_impl( boost::ref(ctx) );
    }

    virtual ::CEGUI::Rect getUnclippedInnerRect_impl(  ) const  {
        if( bp::override func_getUnclippedInnerRect_impl = this->get_override( "getUnclippedInnerRect_impl" ) )
            return func_getUnclippedInnerRect_impl(  );
        else{
            return this->CEGUI::Window::getUnclippedInnerRect_impl(  );
        }
    }
    
    ::CEGUI::Rect default_getUnclippedInnerRect_impl(  ) const  {
        return CEGUI::Window::getUnclippedInnerRect_impl( );
    }

    virtual bool isHit( ::CEGUI::Vector2 const & position, bool const allow_disabled=false ) const  {
        if( bp::override func_isHit = this->get_override( "isHit" ) )
            return func_isHit( boost::ref(position), allow_disabled );
        else{
            return this->CEGUI::Window::isHit( boost::ref(position), allow_disabled );
        }
    }
    
    bool default_isHit( ::CEGUI::Vector2 const & position, bool const allow_disabled=false ) const  {
        return CEGUI::Window::isHit( boost::ref(position), allow_disabled );
    }

    virtual void performChildWindowLayout(  ) {
        if( bp::override func_performChildWindowLayout = this->get_override( "performChildWindowLayout" ) )
            func_performChildWindowLayout(  );
        else{
            this->CEGUI::Window::performChildWindowLayout(  );
        }
    }
    
    void default_performChildWindowLayout(  ) {
        CEGUI::Window::performChildWindowLayout( );
    }

    virtual void setLookNFeel( ::CEGUI::String const & look ) {
        if( bp::override func_setLookNFeel = this->get_override( "setLookNFeel" ) )
            func_setLookNFeel( boost::ref(look) );
        else{
            this->CEGUI::Window::setLookNFeel( boost::ref(look) );
        }
    }
    
    void default_setLookNFeel( ::CEGUI::String const & look ) {
        CEGUI::Window::setLookNFeel( boost::ref(look) );
    }

    virtual void setMargin( ::CEGUI::UBox const & margin ) {
        if( bp::override func_setMargin = this->get_override( "setMargin" ) )
            func_setMargin( boost::ref(margin) );
        else{
            this->CEGUI::Window::setMargin( boost::ref(margin) );
        }
    }
    
    void default_setMargin( ::CEGUI::UBox const & margin ) {
        CEGUI::Window::setMargin( boost::ref(margin) );
    }

    virtual ::CEGUI::RefCounted< CEGUI::BoundSlot > subscribeScriptedEvent( ::CEGUI::String const & name, ::CEGUI::String const & subscriber_name ) {
        if( bp::override func_subscribeScriptedEvent = this->get_override( "subscribeScriptedEvent" ) )
            return func_subscribeScriptedEvent( boost::ref(name), boost::ref(subscriber_name) );
        else{
            return this->CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), boost::ref(subscriber_name) );
        }
    }
    
    ::CEGUI::RefCounted< CEGUI::BoundSlot > default_subscribeScriptedEvent( ::CEGUI::String const & name, ::CEGUI::String const & subscriber_name ) {
        return CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), boost::ref(subscriber_name) );
    }

    virtual ::CEGUI::RefCounted< CEGUI::BoundSlot > subscribeScriptedEvent( ::CEGUI::String const & name, unsigned int group, ::CEGUI::String const & subscriber_name ) {
        if( bp::override func_subscribeScriptedEvent = this->get_override( "subscribeScriptedEvent" ) )
            return func_subscribeScriptedEvent( boost::ref(name), group, boost::ref(subscriber_name) );
        else{
            return this->CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), group, boost::ref(subscriber_name) );
        }
    }
    
    ::CEGUI::RefCounted< CEGUI::BoundSlot > default_subscribeScriptedEvent( ::CEGUI::String const & name, unsigned int group, ::CEGUI::String const & subscriber_name ) {
        return CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), group, boost::ref(subscriber_name) );
    }

    virtual void update( float elapsed ) {
        if( bp::override func_update = this->get_override( "update" ) )
            func_update( elapsed );
        else{
            this->CEGUI::Window::update( elapsed );
        }
    }
    
    void default_update( float elapsed ) {
        CEGUI::Window::update( elapsed );
    }

    virtual void writeXMLToStream( ::CEGUI::XMLSerializer & xml_stream ) const  {
        if( bp::override func_writeXMLToStream = this->get_override( "writeXMLToStream" ) )
            func_writeXMLToStream( boost::ref(xml_stream) );
        else{
            this->CEGUI::Window::writeXMLToStream( boost::ref(xml_stream) );
        }
    }
    
    void default_writeXMLToStream( ::CEGUI::XMLSerializer & xml_stream ) const  {
        CEGUI::Window::writeXMLToStream( boost::ref(xml_stream) );
    }

};

void register_Spinner_class(){

    { //::CEGUI::Spinner
        typedef bp::class_< Spinner_wrapper, bp::bases< CEGUI::Window >, boost::noncopyable > Spinner_exposer_t;
        Spinner_exposer_t Spinner_exposer = Spinner_exposer_t( "Spinner", "*!\n\
            \n\
                Base class for the Spinner widget.\n\
        \n\
                The spinner widget has a text area where numbers may be entered\n\
                and two buttons which may be used to increase or decrease the\n\
                value in the text area by a user specified amount.\n\
            *\n", bp::init< CEGUI::String const &, CEGUI::String const & >(( bp::arg("type"), bp::arg("name") ), "*************************************************************************\n\
            Object Construction and Destruction\n\
        *************************************************************************\n\
        *!\n\
        \n\
            Constructor for Spinner objects\n\
        *\n") );
        bp::scope Spinner_scope( Spinner_exposer );
        bp::enum_< CEGUI::Spinner::TextInputMode>("TextInputMode")
            .value("FloatingPoint", CEGUI::Spinner::FloatingPoint)
            .value("Integer", CEGUI::Spinner::Integer)
            .value("Hexadecimal", CEGUI::Spinner::Hexadecimal)
            .value("Octal", CEGUI::Spinner::Octal)
            .export_values()
            ;
        { //::CEGUI::Spinner::getCurrentValue
        
            typedef double ( ::CEGUI::Spinner::*getCurrentValue_function_type )(  ) const;
            
            Spinner_exposer.def( 
                "getCurrentValue"
                , getCurrentValue_function_type( &::CEGUI::Spinner::getCurrentValue )
                , "*************************************************************************\n\
                     Accessors\n\
                    *************************************************************************\n\
                    *!\n\
                    \n\
                        Return the current spinner value.\n\
            \n\
                    @return\n\
                        current value of the Spinner.\n\
                    *\n" );
        
        }
        { //::CEGUI::Spinner::getMaximumValue
        
            typedef double ( ::CEGUI::Spinner::*getMaximumValue_function_type )(  ) const;
            
            Spinner_exposer.def( 
                "getMaximumValue"
                , getMaximumValue_function_type( &::CEGUI::Spinner::getMaximumValue )
                , "*!\n\
                    \n\
                        Return the current maximum limit value for the Spinner.\n\
            \n\
                    @return\n\
                        Maximum value that is allowed for the spinner.\n\
                    *\n" );
        
        }
        { //::CEGUI::Spinner::getMinimumValue
        
            typedef double ( ::CEGUI::Spinner::*getMinimumValue_function_type )(  ) const;
            
            Spinner_exposer.def( 
                "getMinimumValue"
                , getMinimumValue_function_type( &::CEGUI::Spinner::getMinimumValue )
                , "*!\n\
                    \n\
                        Return the current minimum limit value for the Spinner.\n\
            \n\
                    @return\n\
                        Minimum value that is allowed for the spinner.\n\
                    *\n" );
        
        }
        { //::CEGUI::Spinner::getStepSize
        
            typedef double ( ::CEGUI::Spinner::*getStepSize_function_type )(  ) const;
            
            Spinner_exposer.def( 
                "getStepSize"
                , getStepSize_function_type( &::CEGUI::Spinner::getStepSize )
                , "*!\n\
                    \n\
                        Return the current step value.\n\
            \n\
                    @return\n\
                        Step value.  This is the value added to the spinner vaue when the\n\
                        up  down buttons are clicked.\n\
                    *\n" );
        
        }
        { //::CEGUI::Spinner::getTextInputMode
        
            typedef ::CEGUI::Spinner::TextInputMode ( ::CEGUI::Spinner::*getTextInputMode_function_type )(  ) const;
            
            Spinner_exposer.def( 
                "getTextInputMode"
                , getTextInputMode_function_type( &::CEGUI::Spinner::getTextInputMode )
                , "*!\n\
                    \n\
                        Return the current text input  display mode setting.\n\
            \n\
                    @return\n\
                        One of the TextInputMode enumerated values indicating the current\n\
                        text input and display mode.\n\
                    *\n" );
        
        }
        { //::CEGUI::Spinner::initialiseComponents
        
            typedef void ( ::CEGUI::Spinner::*initialiseComponents_function_type )(  ) ;
            typedef void ( Spinner_wrapper::*default_initialiseComponents_function_type )(  ) ;
            
            Spinner_exposer.def( 
                "initialiseComponents"
                , initialiseComponents_function_type(&::CEGUI::Spinner::initialiseComponents)
                , default_initialiseComponents_function_type(&Spinner_wrapper::default_initialiseComponents) );
        
        }
        { //::CEGUI::Spinner::setCurrentValue
        
            typedef void ( ::CEGUI::Spinner::*setCurrentValue_function_type )( double ) ;
            
            Spinner_exposer.def( 
                "setCurrentValue"
                , setCurrentValue_function_type( &::CEGUI::Spinner::setCurrentValue )
                , ( bp::arg("value") )
                , "*************************************************************************\n\
                     Manipulators\n\
                    *************************************************************************\n\
                    *!\n\
                    \n\
                        Set the current spinner value.\n\
            \n\
                    @param value\n\
                        value to be assigned to the Spinner.\n\
            \n\
                    @return\n\
                        Nothing.\n\
                    *\n" );
        
        }
        { //::CEGUI::Spinner::setMaximumValue
        
            typedef void ( ::CEGUI::Spinner::*setMaximumValue_function_type )( double ) ;
            
            Spinner_exposer.def( 
                "setMaximumValue"
                , setMaximumValue_function_type( &::CEGUI::Spinner::setMaximumValue )
                , ( bp::arg("maxValue") )
                , "*!\n\
                    \n\
                        Set the spinner maximum value.\n\
            \n\
                    @param maxValue\n\
                        The maximum value to be allowed by the spinner.\n\
            \n\
                    @return\n\
                        Nothing.\n\
                    *\n" );
        
        }
        { //::CEGUI::Spinner::setMinimumValue
        
            typedef void ( ::CEGUI::Spinner::*setMinimumValue_function_type )( double ) ;
            
            Spinner_exposer.def( 
                "setMinimumValue"
                , setMinimumValue_function_type( &::CEGUI::Spinner::setMinimumValue )
                , ( bp::arg("minVaue") )
                , "*!\n\
                    \n\
                        Set the spinner minimum value.\n\
            \n\
                    @param minVaue\n\
                        The minimum value to be allowed by the spinner.\n\
            \n\
                    @return\n\
                        Nothing.\n\
                    *\n" );
        
        }
        { //::CEGUI::Spinner::setStepSize
        
            typedef void ( ::CEGUI::Spinner::*setStepSize_function_type )( double ) ;
            
            Spinner_exposer.def( 
                "setStepSize"
                , setStepSize_function_type( &::CEGUI::Spinner::setStepSize )
                , ( bp::arg("step") )
                , "*!\n\
                    \n\
                        Set the current step value.\n\
            \n\
                    @param step\n\
                        The value added to be the spinner value when the\n\
                        up  down buttons are clicked.\n\
            \n\
                    @return\n\
                        Nothing.\n\
                    *\n" );
        
        }
        { //::CEGUI::Spinner::setTextInputMode
        
            typedef void ( ::CEGUI::Spinner::*setTextInputMode_function_type )( ::CEGUI::Spinner::TextInputMode ) ;
            
            Spinner_exposer.def( 
                "setTextInputMode"
                , setTextInputMode_function_type( &::CEGUI::Spinner::setTextInputMode )
                , ( bp::arg("mode") )
                , "*!\n\
                    \n\
                        Set the spinner input  display mode.\n\
            \n\
                    @param mode\n\
                        One of the TextInputMode enumerated values indicating the text\n\
                        input  display mode to be used by the spinner.\n\
            \n\
                    @return\n\
                        Nothing.\n\
                    *\n" );
        
        }
        Spinner_exposer.add_static_property( "DecreaseButtonNameSuffix"
                        , bp::make_getter( &CEGUI::Spinner::DecreaseButtonNameSuffix
                                , bp::return_value_policy< bp::return_by_value >() ) );
        Spinner_exposer.add_static_property( "EditboxNameSuffix"
                        , bp::make_getter( &CEGUI::Spinner::EditboxNameSuffix
                                , bp::return_value_policy< bp::return_by_value >() ) );
        Spinner_exposer.add_static_property( "EventMaximumValueChanged"
                        , bp::make_getter( &CEGUI::Spinner::EventMaximumValueChanged
                                , bp::return_value_policy< bp::return_by_value >() ) );
        Spinner_exposer.add_static_property( "EventMinimumValueChanged"
                        , bp::make_getter( &CEGUI::Spinner::EventMinimumValueChanged
                                , bp::return_value_policy< bp::return_by_value >() ) );
        Spinner_exposer.add_static_property( "EventStepChanged"
                        , bp::make_getter( &CEGUI::Spinner::EventStepChanged
                                , bp::return_value_policy< bp::return_by_value >() ) );
        Spinner_exposer.add_static_property( "EventTextInputModeChanged"
                        , bp::make_getter( &CEGUI::Spinner::EventTextInputModeChanged
                                , bp::return_value_policy< bp::return_by_value >() ) );
        Spinner_exposer.add_static_property( "EventValueChanged"
                        , bp::make_getter( &CEGUI::Spinner::EventValueChanged
                                , bp::return_value_policy< bp::return_by_value >() ) );
        Spinner_exposer.add_static_property( "IncreaseButtonNameSuffix"
                        , bp::make_getter( &CEGUI::Spinner::IncreaseButtonNameSuffix
                                , bp::return_value_policy< bp::return_by_value >() ) );
        { //::CEGUI::Window::beginInitialisation
        
            typedef void ( ::CEGUI::Window::*beginInitialisation_function_type )(  ) ;
            typedef void ( Spinner_wrapper::*default_beginInitialisation_function_type )(  ) ;
            
            Spinner_exposer.def( 
                "beginInitialisation"
                , beginInitialisation_function_type(&::CEGUI::Window::beginInitialisation)
                , default_beginInitialisation_function_type(&Spinner_wrapper::default_beginInitialisation) );
        
        }
        { //::CEGUI::Window::cloneChildWidgetsTo
        
            typedef void ( ::CEGUI::Window::*cloneChildWidgetsTo_function_type )( ::CEGUI::Window & ) const;
            typedef void ( Spinner_wrapper::*default_cloneChildWidgetsTo_function_type )( ::CEGUI::Window & ) const;
            
            Spinner_exposer.def( 
                "cloneChildWidgetsTo"
                , cloneChildWidgetsTo_function_type(&::CEGUI::Window::cloneChildWidgetsTo)
                , default_cloneChildWidgetsTo_function_type(&Spinner_wrapper::default_cloneChildWidgetsTo)
                , ( bp::arg("target") ) );
        
        }
        { //::CEGUI::Window::clonePropertiesTo
        
            typedef void ( ::CEGUI::Window::*clonePropertiesTo_function_type )( ::CEGUI::Window & ) const;
            typedef void ( Spinner_wrapper::*default_clonePropertiesTo_function_type )( ::CEGUI::Window & ) const;
            
            Spinner_exposer.def( 
                "clonePropertiesTo"
                , clonePropertiesTo_function_type(&::CEGUI::Window::clonePropertiesTo)
                , default_clonePropertiesTo_function_type(&Spinner_wrapper::default_clonePropertiesTo)
                , ( bp::arg("target") ) );
        
        }
        { //::CEGUI::Window::destroy
        
            typedef void ( ::CEGUI::Window::*destroy_function_type )(  ) ;
            typedef void ( Spinner_wrapper::*default_destroy_function_type )(  ) ;
            
            Spinner_exposer.def( 
                "destroy"
                , destroy_function_type(&::CEGUI::Window::destroy)
                , default_destroy_function_type(&Spinner_wrapper::default_destroy) );
        
        }
        { //::CEGUI::Window::endInitialisation
        
            typedef void ( ::CEGUI::Window::*endInitialisation_function_type )(  ) ;
            typedef void ( Spinner_wrapper::*default_endInitialisation_function_type )(  ) ;
            
            Spinner_exposer.def( 
                "endInitialisation"
                , endInitialisation_function_type(&::CEGUI::Window::endInitialisation)
                , default_endInitialisation_function_type(&Spinner_wrapper::default_endInitialisation) );
        
        }
        { //::CEGUI::EventSet::fireEvent
        
            typedef void ( ::CEGUI::EventSet::*fireEvent_function_type )( ::CEGUI::String const &,::CEGUI::EventArgs &,::CEGUI::String const & ) ;
            typedef void ( Spinner_wrapper::*default_fireEvent_function_type )( ::CEGUI::String const &,::CEGUI::EventArgs &,::CEGUI::String const & ) ;
            
            Spinner_exposer.def( 
                "fireEvent"
                , fireEvent_function_type(&::CEGUI::EventSet::fireEvent)
                , default_fireEvent_function_type(&Spinner_wrapper::default_fireEvent)
                , ( bp::arg("name"), bp::arg("args"), bp::arg("eventNamespace")="" ) );
        
        }
        { //::CEGUI::Window::getRenderedStringParser
        
            typedef ::CEGUI::RenderedStringParser & ( ::CEGUI::Window::*getRenderedStringParser_function_type )(  ) const;
            
            Spinner_exposer.def( 
                "getRenderedStringParser"
                , getRenderedStringParser_function_type(&::CEGUI::Window::getRenderedStringParser)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::Window::getRenderingContext_impl
        
            typedef void ( ::CEGUI::Window::*getRenderingContext_impl_function_type )( ::CEGUI::RenderingContext & ) const;
            typedef void ( Spinner_wrapper::*default_getRenderingContext_impl_function_type )( ::CEGUI::RenderingContext & ) const;
            
            Spinner_exposer.def( 
                "getRenderingContext_impl"
                , getRenderingContext_impl_function_type(&::CEGUI::Window::getRenderingContext_impl)
                , default_getRenderingContext_impl_function_type(&Spinner_wrapper::default_getRenderingContext_impl)
                , ( bp::arg("ctx") ) );
        
        }
        { //::CEGUI::Window::getUnclippedInnerRect_impl
        
            typedef ::CEGUI::Rect ( ::CEGUI::Window::*getUnclippedInnerRect_impl_function_type )(  ) const;
            typedef ::CEGUI::Rect ( Spinner_wrapper::*default_getUnclippedInnerRect_impl_function_type )(  ) const;
            
            Spinner_exposer.def( 
                "getUnclippedInnerRect_impl"
                , getUnclippedInnerRect_impl_function_type(&::CEGUI::Window::getUnclippedInnerRect_impl)
                , default_getUnclippedInnerRect_impl_function_type(&Spinner_wrapper::default_getUnclippedInnerRect_impl) );
        
        }
        { //::CEGUI::Window::isHit
        
            typedef bool ( ::CEGUI::Window::*isHit_function_type )( ::CEGUI::Vector2 const &,bool const ) const;
            typedef bool ( Spinner_wrapper::*default_isHit_function_type )( ::CEGUI::Vector2 const &,bool const ) const;
            
            Spinner_exposer.def( 
                "isHit"
                , isHit_function_type(&::CEGUI::Window::isHit)
                , default_isHit_function_type(&Spinner_wrapper::default_isHit)
                , ( bp::arg("position"), bp::arg("allow_disabled")=(bool const)(false) ) );
        
        }
        { //::CEGUI::Window::performChildWindowLayout
        
            typedef void ( ::CEGUI::Window::*performChildWindowLayout_function_type )(  ) ;
            typedef void ( Spinner_wrapper::*default_performChildWindowLayout_function_type )(  ) ;
            
            Spinner_exposer.def( 
                "performChildWindowLayout"
                , performChildWindowLayout_function_type(&::CEGUI::Window::performChildWindowLayout)
                , default_performChildWindowLayout_function_type(&Spinner_wrapper::default_performChildWindowLayout) );
        
        }
        { //::CEGUI::Window::setLookNFeel
        
            typedef void ( ::CEGUI::Window::*setLookNFeel_function_type )( ::CEGUI::String const & ) ;
            typedef void ( Spinner_wrapper::*default_setLookNFeel_function_type )( ::CEGUI::String const & ) ;
            
            Spinner_exposer.def( 
                "setLookNFeel"
                , setLookNFeel_function_type(&::CEGUI::Window::setLookNFeel)
                , default_setLookNFeel_function_type(&Spinner_wrapper::default_setLookNFeel)
                , ( bp::arg("look") ) );
        
        }
        { //::CEGUI::Window::setMargin
        
            typedef void ( ::CEGUI::Window::*setMargin_function_type )( ::CEGUI::UBox const & ) ;
            typedef void ( Spinner_wrapper::*default_setMargin_function_type )( ::CEGUI::UBox const & ) ;
            
            Spinner_exposer.def( 
                "setMargin"
                , setMargin_function_type(&::CEGUI::Window::setMargin)
                , default_setMargin_function_type(&Spinner_wrapper::default_setMargin)
                , ( bp::arg("margin") ) );
        
        }
        { //::CEGUI::EventSet::subscribeScriptedEvent
        
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( ::CEGUI::EventSet::*subscribeScriptedEvent_function_type )( ::CEGUI::String const &,::CEGUI::String const & ) ;
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( Spinner_wrapper::*default_subscribeScriptedEvent_function_type )( ::CEGUI::String const &,::CEGUI::String const & ) ;
            
            Spinner_exposer.def( 
                "subscribeScriptedEvent"
                , subscribeScriptedEvent_function_type(&::CEGUI::EventSet::subscribeScriptedEvent)
                , default_subscribeScriptedEvent_function_type(&Spinner_wrapper::default_subscribeScriptedEvent)
                , ( bp::arg("name"), bp::arg("subscriber_name") ) );
        
        }
        { //::CEGUI::EventSet::subscribeScriptedEvent
        
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( ::CEGUI::EventSet::*subscribeScriptedEvent_function_type )( ::CEGUI::String const &,unsigned int,::CEGUI::String const & ) ;
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( Spinner_wrapper::*default_subscribeScriptedEvent_function_type )( ::CEGUI::String const &,unsigned int,::CEGUI::String const & ) ;
            
            Spinner_exposer.def( 
                "subscribeScriptedEvent"
                , subscribeScriptedEvent_function_type(&::CEGUI::EventSet::subscribeScriptedEvent)
                , default_subscribeScriptedEvent_function_type(&Spinner_wrapper::default_subscribeScriptedEvent)
                , ( bp::arg("name"), bp::arg("group"), bp::arg("subscriber_name") ) );
        
        }
        { //::CEGUI::Window::update
        
            typedef void ( ::CEGUI::Window::*update_function_type )( float ) ;
            typedef void ( Spinner_wrapper::*default_update_function_type )( float ) ;
            
            Spinner_exposer.def( 
                "update"
                , update_function_type(&::CEGUI::Window::update)
                , default_update_function_type(&Spinner_wrapper::default_update)
                , ( bp::arg("elapsed") ) );
        
        }
        { //::CEGUI::Window::writeXMLToStream
        
            typedef void ( ::CEGUI::Window::*writeXMLToStream_function_type )( ::CEGUI::XMLSerializer & ) const;
            typedef void ( Spinner_wrapper::*default_writeXMLToStream_function_type )( ::CEGUI::XMLSerializer & ) const;
            
            Spinner_exposer.def( 
                "writeXMLToStream"
                , writeXMLToStream_function_type(&::CEGUI::Window::writeXMLToStream)
                , default_writeXMLToStream_function_type(&Spinner_wrapper::default_writeXMLToStream)
                , ( bp::arg("xml_stream") ) );
        
        }
    }

}
