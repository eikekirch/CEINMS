// Copyright (C) 2005-2010 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema to
// C++ data binding compiler.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
// In addition, as a special exception, Code Synthesis Tools CC gives
// permission to link this program with the Xerces-C++ library (or with
// modified versions of Xerces-C++ that use the same license as Xerces-C++),
// and distribute linked combinations including the two. You must obey
// the GNU General Public License version 2 in all respects for all of
// the code used other than Xerces-C++. If you modify this copy of the
// program, you may extend this exception to your version of the program,
// but you are not obligated to do so. If you do not wish to do so, delete
// this exception statement from your version.
//
// Furthermore, Code Synthesis Tools CC makes a special exception for
// the Free/Libre and Open Source Software (FLOSS) which is described
// in the accompanying FLOSSE file.
//

// Begin prologue.
//
//
// End prologue.

#include <xsd/cxx/pre.hxx>

#include "emgGenerator.hxx"

// StringListType
//

StringListType::
StringListType ()
: ::xsd::cxx::tree::list< ::xml_schema::string, char > ( ::xml_schema::flags (0), this)
{
}

StringListType::
StringListType (size_type n, const ::xml_schema::string& x)
: ::xsd::cxx::tree::list< ::xml_schema::string, char > (n, x, this)
{
}

StringListType::
StringListType (const StringListType& o,
                ::xml_schema::flags f,
                ::xml_schema::container* c)
: ::xml_schema::simple_type (o, f, c),
  ::xsd::cxx::tree::list< ::xml_schema::string, char > (o, f, this)
{
}

// EmgType
// 

const EmgType::id_optional& EmgType::
id () const
{
  return this->id_;
}

EmgType::id_optional& EmgType::
id ()
{
  return this->id_;
}

void EmgType::
id (const id_type& x)
{
  this->id_.set (x);
}

void EmgType::
id (const id_optional& x)
{
  this->id_ = x;
}

void EmgType::
id (::std::auto_ptr< id_type > x)
{
  this->id_.set (x);
}

const EmgType::operation_optional& EmgType::
operation () const
{
  return this->operation_;
}

EmgType::operation_optional& EmgType::
operation ()
{
  return this->operation_;
}

void EmgType::
operation (const operation_type& x)
{
  this->operation_.set (x);
}

void EmgType::
operation (const operation_optional& x)
{
  this->operation_ = x;
}

void EmgType::
operation (::std::auto_ptr< operation_type > x)
{
  this->operation_.set (x);
}


// EmgListType
// 

const EmgListType::emg_sequence& EmgListType::
emg () const
{
  return this->emg_;
}

EmgListType::emg_sequence& EmgListType::
emg ()
{
  return this->emg_;
}

void EmgListType::
emg (const emg_sequence& s)
{
  this->emg_ = s;
}


// emgGenerator
// 

const emgGenerator::experimental_type& emgGenerator::
experimental () const
{
  return this->experimental_.get ();
}

emgGenerator::experimental_type& emgGenerator::
experimental ()
{
  return this->experimental_.get ();
}

void emgGenerator::
experimental (const experimental_type& x)
{
  this->experimental_.set (x);
}

void emgGenerator::
experimental (::std::auto_ptr< experimental_type > x)
{
  this->experimental_.set (x);
}

const emgGenerator::mapping_type& emgGenerator::
mapping () const
{
  return this->mapping_.get ();
}

emgGenerator::mapping_type& emgGenerator::
mapping ()
{
  return this->mapping_.get ();
}

void emgGenerator::
mapping (const mapping_type& x)
{
  this->mapping_.set (x);
}

void emgGenerator::
mapping (::std::auto_ptr< mapping_type > x)
{
  this->mapping_.set (x);
}

const emgGenerator::output_type& emgGenerator::
output () const
{
  return this->output_.get ();
}

emgGenerator::output_type& emgGenerator::
output ()
{
  return this->output_.get ();
}

void emgGenerator::
output (const output_type& x)
{
  this->output_.set (x);
}

void emgGenerator::
output (::std::auto_ptr< output_type > x)
{
  this->output_.set (x);
}


#include <xsd/cxx/xml/dom/parsing-source.hxx>

// StringListType
//

StringListType::
StringListType (const ::xercesc::DOMElement& e,
                ::xml_schema::flags f,
                ::xml_schema::container* c)
: ::xml_schema::simple_type (e, f, c),
  ::xsd::cxx::tree::list< ::xml_schema::string, char > (e, f, this)
{
}

StringListType::
StringListType (const ::xercesc::DOMAttr& a,
                ::xml_schema::flags f,
                ::xml_schema::container* c)
: ::xml_schema::simple_type (a, f, c),
  ::xsd::cxx::tree::list< ::xml_schema::string, char > (a, f, this)
{
}

StringListType::
StringListType (const ::std::string& s,
                const ::xercesc::DOMElement* e,
                ::xml_schema::flags f,
                ::xml_schema::container* c)
: ::xml_schema::simple_type (s, e, f, c),
  ::xsd::cxx::tree::list< ::xml_schema::string, char > (s, e, f, this)
{
}

StringListType* StringListType::
_clone (::xml_schema::flags f,
        ::xml_schema::container* c) const
{
  return new class StringListType (*this, f, c);
}

StringListType::
~StringListType ()
{
}

// EmgType
//

EmgType::
EmgType ()
: ::StringListType (),
  id_ (::xml_schema::flags (), this),
  operation_ (::xml_schema::flags (), this)
{
}

EmgType::
EmgType (const ::StringListType& _xsd_StringListType_base)
: ::StringListType (_xsd_StringListType_base),
  id_ (::xml_schema::flags (), this),
  operation_ (::xml_schema::flags (), this)
{
}

EmgType::
EmgType (const EmgType& x,
         ::xml_schema::flags f,
         ::xml_schema::container* c)
: ::StringListType (x, f, c),
  id_ (x.id_, f, this),
  operation_ (x.operation_, f, this)
{
}

EmgType::
EmgType (const ::xercesc::DOMElement& e,
         ::xml_schema::flags f,
         ::xml_schema::container* c)
: ::StringListType (e, f | ::xml_schema::flags::base, c),
  id_ (f, this),
  operation_ (f, this)
{
  if ((f & ::xml_schema::flags::base) == 0)
  {
    ::xsd::cxx::xml::dom::parser< char > p (e, false, true);
    this->parse (p, f);
  }
}

void EmgType::
parse (::xsd::cxx::xml::dom::parser< char >& p,
       ::xml_schema::flags f)
{
  while (p.more_attributes ())
  {
    const ::xercesc::DOMAttr& i (p.next_attribute ());
    const ::xsd::cxx::xml::qualified_name< char > n (
      ::xsd::cxx::xml::dom::name< char > (i));

    if (n.name () == "id" && n.namespace_ ().empty ())
    {
      ::std::auto_ptr< id_type > r (
        id_traits::create (i, f, this));

      this->id_.set (r);
      continue;
    }

    if (n.name () == "operation" && n.namespace_ ().empty ())
    {
      ::std::auto_ptr< operation_type > r (
        operation_traits::create (i, f, this));

      this->operation_.set (r);
      continue;
    }
  }
}

EmgType* EmgType::
_clone (::xml_schema::flags f,
        ::xml_schema::container* c) const
{
  return new class EmgType (*this, f, c);
}

EmgType::
~EmgType ()
{
}

// EmgListType
//

EmgListType::
EmgListType ()
: ::xml_schema::type (),
  emg_ (::xml_schema::flags (), this)
{
}

EmgListType::
EmgListType (const EmgListType& x,
             ::xml_schema::flags f,
             ::xml_schema::container* c)
: ::xml_schema::type (x, f, c),
  emg_ (x.emg_, f, this)
{
}

EmgListType::
EmgListType (const ::xercesc::DOMElement& e,
             ::xml_schema::flags f,
             ::xml_schema::container* c)
: ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
  emg_ (f, this)
{
  if ((f & ::xml_schema::flags::base) == 0)
  {
    ::xsd::cxx::xml::dom::parser< char > p (e, true, false);
    this->parse (p, f);
  }
}

void EmgListType::
parse (::xsd::cxx::xml::dom::parser< char >& p,
       ::xml_schema::flags f)
{
  for (; p.more_elements (); p.next_element ())
  {
    const ::xercesc::DOMElement& i (p.cur_element ());
    const ::xsd::cxx::xml::qualified_name< char > n (
      ::xsd::cxx::xml::dom::name< char > (i));

    // emg
    //
    if (n.name () == "emg" && n.namespace_ ().empty ())
    {
      ::std::auto_ptr< emg_type > r (
        emg_traits::create (i, f, this));

      this->emg_.push_back (r);
      continue;
    }

    break;
  }
}

EmgListType* EmgListType::
_clone (::xml_schema::flags f,
        ::xml_schema::container* c) const
{
  return new class EmgListType (*this, f, c);
}

EmgListType::
~EmgListType ()
{
}

// emgGenerator
//

emgGenerator::
emgGenerator (const experimental_type& experimental,
              const mapping_type& mapping,
              const output_type& output)
: ::xml_schema::type (),
  experimental_ (experimental, ::xml_schema::flags (), this),
  mapping_ (mapping, ::xml_schema::flags (), this),
  output_ (output, ::xml_schema::flags (), this)
{
}

emgGenerator::
emgGenerator (::std::auto_ptr< experimental_type >& experimental,
              ::std::auto_ptr< mapping_type >& mapping,
              const output_type& output)
: ::xml_schema::type (),
  experimental_ (experimental, ::xml_schema::flags (), this),
  mapping_ (mapping, ::xml_schema::flags (), this),
  output_ (output, ::xml_schema::flags (), this)
{
}

emgGenerator::
emgGenerator (const emgGenerator& x,
              ::xml_schema::flags f,
              ::xml_schema::container* c)
: ::xml_schema::type (x, f, c),
  experimental_ (x.experimental_, f, this),
  mapping_ (x.mapping_, f, this),
  output_ (x.output_, f, this)
{
}

emgGenerator::
emgGenerator (const ::xercesc::DOMElement& e,
              ::xml_schema::flags f,
              ::xml_schema::container* c)
: ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
  experimental_ (f, this),
  mapping_ (f, this),
  output_ (f, this)
{
  if ((f & ::xml_schema::flags::base) == 0)
  {
    ::xsd::cxx::xml::dom::parser< char > p (e, true, false);
    this->parse (p, f);
  }
}

void emgGenerator::
parse (::xsd::cxx::xml::dom::parser< char >& p,
       ::xml_schema::flags f)
{
  for (; p.more_elements (); p.next_element ())
  {
    const ::xercesc::DOMElement& i (p.cur_element ());
    const ::xsd::cxx::xml::qualified_name< char > n (
      ::xsd::cxx::xml::dom::name< char > (i));

    // experimental
    //
    if (n.name () == "experimental" && n.namespace_ ().empty ())
    {
      ::std::auto_ptr< experimental_type > r (
        experimental_traits::create (i, f, this));

      if (!experimental_.present ())
      {
        this->experimental_.set (r);
        continue;
      }
    }

    // mapping
    //
    if (n.name () == "mapping" && n.namespace_ ().empty ())
    {
      ::std::auto_ptr< mapping_type > r (
        mapping_traits::create (i, f, this));

      if (!mapping_.present ())
      {
        this->mapping_.set (r);
        continue;
      }
    }

    // output
    //
    if (n.name () == "output" && n.namespace_ ().empty ())
    {
      ::std::auto_ptr< output_type > r (
        output_traits::create (i, f, this));

      if (!output_.present ())
      {
        this->output_.set (r);
        continue;
      }
    }

    break;
  }

  if (!experimental_.present ())
  {
    throw ::xsd::cxx::tree::expected_element< char > (
      "experimental",
      "");
  }

  if (!mapping_.present ())
  {
    throw ::xsd::cxx::tree::expected_element< char > (
      "mapping",
      "");
  }

  if (!output_.present ())
  {
    throw ::xsd::cxx::tree::expected_element< char > (
      "output",
      "");
  }
}

emgGenerator* emgGenerator::
_clone (::xml_schema::flags f,
        ::xml_schema::container* c) const
{
  return new class emgGenerator (*this, f, c);
}

emgGenerator::
~emgGenerator ()
{
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

::std::auto_ptr< ::emgGenerator >
emgGenerator_ (const ::std::string& u,
               ::xml_schema::flags f,
               const ::xml_schema::properties& p)
{
  ::xsd::cxx::xml::auto_initializer i (
    (f & ::xml_schema::flags::dont_initialize) == 0,
    (f & ::xml_schema::flags::keep_dom) == 0);

  ::xsd::cxx::tree::error_handler< char > h;

  ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
    ::xsd::cxx::xml::dom::parse< char > (
      u, h, p, f));

  h.throw_if_failed< ::xsd::cxx::tree::parsing< char > > ();

  ::std::auto_ptr< ::emgGenerator > r (
    ::emgGenerator_ (
      d, f | ::xml_schema::flags::own_dom, p));

  return r;
}

::std::auto_ptr< ::emgGenerator >
emgGenerator_ (const ::std::string& u,
               ::xml_schema::error_handler& h,
               ::xml_schema::flags f,
               const ::xml_schema::properties& p)
{
  ::xsd::cxx::xml::auto_initializer i (
    (f & ::xml_schema::flags::dont_initialize) == 0,
    (f & ::xml_schema::flags::keep_dom) == 0);

  ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
    ::xsd::cxx::xml::dom::parse< char > (
      u, h, p, f));

  if (!d.get ())
    throw ::xsd::cxx::tree::parsing< char > ();

  ::std::auto_ptr< ::emgGenerator > r (
    ::emgGenerator_ (
      d, f | ::xml_schema::flags::own_dom, p));

  return r;
}

::std::auto_ptr< ::emgGenerator >
emgGenerator_ (const ::std::string& u,
               ::xercesc::DOMErrorHandler& h,
               ::xml_schema::flags f,
               const ::xml_schema::properties& p)
{
  ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
    ::xsd::cxx::xml::dom::parse< char > (
      u, h, p, f));

  if (!d.get ())
    throw ::xsd::cxx::tree::parsing< char > ();

  ::std::auto_ptr< ::emgGenerator > r (
    ::emgGenerator_ (
      d, f | ::xml_schema::flags::own_dom, p));

  return r;
}

::std::auto_ptr< ::emgGenerator >
emgGenerator_ (::std::istream& is,
               ::xml_schema::flags f,
               const ::xml_schema::properties& p)
{
  ::xsd::cxx::xml::auto_initializer i (
    (f & ::xml_schema::flags::dont_initialize) == 0,
    (f & ::xml_schema::flags::keep_dom) == 0);

  ::xsd::cxx::xml::sax::std_input_source isrc (is);
  return ::emgGenerator_ (isrc, f, p);
}

::std::auto_ptr< ::emgGenerator >
emgGenerator_ (::std::istream& is,
               ::xml_schema::error_handler& h,
               ::xml_schema::flags f,
               const ::xml_schema::properties& p)
{
  ::xsd::cxx::xml::auto_initializer i (
    (f & ::xml_schema::flags::dont_initialize) == 0,
    (f & ::xml_schema::flags::keep_dom) == 0);

  ::xsd::cxx::xml::sax::std_input_source isrc (is);
  return ::emgGenerator_ (isrc, h, f, p);
}

::std::auto_ptr< ::emgGenerator >
emgGenerator_ (::std::istream& is,
               ::xercesc::DOMErrorHandler& h,
               ::xml_schema::flags f,
               const ::xml_schema::properties& p)
{
  ::xsd::cxx::xml::sax::std_input_source isrc (is);
  return ::emgGenerator_ (isrc, h, f, p);
}

::std::auto_ptr< ::emgGenerator >
emgGenerator_ (::std::istream& is,
               const ::std::string& sid,
               ::xml_schema::flags f,
               const ::xml_schema::properties& p)
{
  ::xsd::cxx::xml::auto_initializer i (
    (f & ::xml_schema::flags::dont_initialize) == 0,
    (f & ::xml_schema::flags::keep_dom) == 0);

  ::xsd::cxx::xml::sax::std_input_source isrc (is, sid);
  return ::emgGenerator_ (isrc, f, p);
}

::std::auto_ptr< ::emgGenerator >
emgGenerator_ (::std::istream& is,
               const ::std::string& sid,
               ::xml_schema::error_handler& h,
               ::xml_schema::flags f,
               const ::xml_schema::properties& p)
{
  ::xsd::cxx::xml::auto_initializer i (
    (f & ::xml_schema::flags::dont_initialize) == 0,
    (f & ::xml_schema::flags::keep_dom) == 0);

  ::xsd::cxx::xml::sax::std_input_source isrc (is, sid);
  return ::emgGenerator_ (isrc, h, f, p);
}

::std::auto_ptr< ::emgGenerator >
emgGenerator_ (::std::istream& is,
               const ::std::string& sid,
               ::xercesc::DOMErrorHandler& h,
               ::xml_schema::flags f,
               const ::xml_schema::properties& p)
{
  ::xsd::cxx::xml::sax::std_input_source isrc (is, sid);
  return ::emgGenerator_ (isrc, h, f, p);
}

::std::auto_ptr< ::emgGenerator >
emgGenerator_ (::xercesc::InputSource& i,
               ::xml_schema::flags f,
               const ::xml_schema::properties& p)
{
  ::xsd::cxx::tree::error_handler< char > h;

  ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
    ::xsd::cxx::xml::dom::parse< char > (
      i, h, p, f));

  h.throw_if_failed< ::xsd::cxx::tree::parsing< char > > ();

  ::std::auto_ptr< ::emgGenerator > r (
    ::emgGenerator_ (
      d, f | ::xml_schema::flags::own_dom, p));

  return r;
}

::std::auto_ptr< ::emgGenerator >
emgGenerator_ (::xercesc::InputSource& i,
               ::xml_schema::error_handler& h,
               ::xml_schema::flags f,
               const ::xml_schema::properties& p)
{
  ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
    ::xsd::cxx::xml::dom::parse< char > (
      i, h, p, f));

  if (!d.get ())
    throw ::xsd::cxx::tree::parsing< char > ();

  ::std::auto_ptr< ::emgGenerator > r (
    ::emgGenerator_ (
      d, f | ::xml_schema::flags::own_dom, p));

  return r;
}

::std::auto_ptr< ::emgGenerator >
emgGenerator_ (::xercesc::InputSource& i,
               ::xercesc::DOMErrorHandler& h,
               ::xml_schema::flags f,
               const ::xml_schema::properties& p)
{
  ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
    ::xsd::cxx::xml::dom::parse< char > (
      i, h, p, f));

  if (!d.get ())
    throw ::xsd::cxx::tree::parsing< char > ();

  ::std::auto_ptr< ::emgGenerator > r (
    ::emgGenerator_ (
      d, f | ::xml_schema::flags::own_dom, p));

  return r;
}

::std::auto_ptr< ::emgGenerator >
emgGenerator_ (const ::xercesc::DOMDocument& d,
               ::xml_schema::flags f,
               const ::xml_schema::properties& p)
{
  if (f & ::xml_schema::flags::keep_dom)
  {
    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > c (
      static_cast< ::xercesc::DOMDocument* > (d.cloneNode (true)));

    ::std::auto_ptr< ::emgGenerator > r (
      ::emgGenerator_ (
        c, f | ::xml_schema::flags::own_dom, p));

    return r;
  }

  const ::xercesc::DOMElement& e (*d.getDocumentElement ());
  const ::xsd::cxx::xml::qualified_name< char > n (
    ::xsd::cxx::xml::dom::name< char > (e));

  if (n.name () == "emgGenerator" &&
      n.namespace_ () == "")
  {
    ::std::auto_ptr< ::emgGenerator > r (
      ::xsd::cxx::tree::traits< ::emgGenerator, char >::create (
        e, f, 0));
    return r;
  }

  throw ::xsd::cxx::tree::unexpected_element < char > (
    n.name (),
    n.namespace_ (),
    "emgGenerator",
    "");
}

::std::auto_ptr< ::emgGenerator >
emgGenerator_ (::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument >& d,
               ::xml_schema::flags f,
               const ::xml_schema::properties&)
{
  ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > c (
    ((f & ::xml_schema::flags::keep_dom) &&
     !(f & ::xml_schema::flags::own_dom))
    ? static_cast< ::xercesc::DOMDocument* > (d->cloneNode (true))
    : 0);

  ::xercesc::DOMDocument& doc (c.get () ? *c : *d);
  const ::xercesc::DOMElement& e (*doc.getDocumentElement ());

  const ::xsd::cxx::xml::qualified_name< char > n (
    ::xsd::cxx::xml::dom::name< char > (e));

  if (f & ::xml_schema::flags::keep_dom)
    doc.setUserData (::xml_schema::dom::tree_node_key,
                     (c.get () ? &c : &d),
                     0);

  if (n.name () == "emgGenerator" &&
      n.namespace_ () == "")
  {
    ::std::auto_ptr< ::emgGenerator > r (
      ::xsd::cxx::tree::traits< ::emgGenerator, char >::create (
        e, f, 0));
    return r;
  }

  throw ::xsd::cxx::tree::unexpected_element < char > (
    n.name (),
    n.namespace_ (),
    "emgGenerator",
    "");
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.
